#include "main.h"
/**
 * print_diagonal - function that draw a diagonal line
 *
 * @n: parameer for number of diagonal needed
 * Rturn: returns void
 */
void print_diagonal(int n)
{
	int times;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (times = 0; times <= n; times++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
