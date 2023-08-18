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
	int spa;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (times = 0; times < n; times++)
	{
		for (spa = 0; spa < times; spa++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
