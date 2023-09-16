#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the first parameter
 *
 * Return: return the sum of 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list pa;

	va_start(pa, n);

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(pa);
	return (sum);
}
