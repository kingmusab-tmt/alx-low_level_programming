#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed
 * @n: number of integers passed to the print_numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list pa;

	if (!separator)
	{
		return;
	}
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(pa, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
