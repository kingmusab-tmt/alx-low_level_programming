#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list pa;

	va_start(pa, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(pa, char *);

			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", str);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(pa);
}
