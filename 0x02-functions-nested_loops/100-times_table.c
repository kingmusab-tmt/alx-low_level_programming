#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: the number for which the times table is printed.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row;

	int column;

		if (n < 0 || n > 15)
			return;

	for (row = 0; row <= 15; row++)
	{
		_putchar('0' + row);
		for (column = 1; column <= n; column++)
		{
			int result = row * column;

			_putchar(',');
			_putchar(' ');
			if (result < 10)
				_putchar(' ');
			if (result < 100)
				_putchar(' ');
			if (result >= 100)
				_putchar('0' + result / 100);
			if (result >= 10)
				_putchar('0' + result / 10 % 10);
			_putchar('0' + result % 10);
		}
		printf("\n");
	}
}
