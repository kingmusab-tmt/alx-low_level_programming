#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - Prints a character.
 * @args: The va_list containing the character to print.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer.
 * @args: The va_list containing the integer to print.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float.
 * @args: The va_list containing the float to print.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string or "(nil)" if NULL.
 * @args: The va_list containing the string to print.
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * print_all - Prints anything based on format.
 * @format: Format string indicating types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char format_char;
	unsigned int i;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		format_char = format[i];
	if (i != 1 && i > 0)
		printf(", ");

	switch (format_char)
	{
		case 'c':
			print_char(args);
			break;
		case 'i':
			print_int(args);
			break;
		case 'f':
			print_float(args);
			break;
		case 's':
			print_string(args);
			break;
		default:
			i++;
			continue;
	}
	i++;
	}
	va_end(args);
	printf("\n");
}
