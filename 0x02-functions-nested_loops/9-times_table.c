#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: does not return a value
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int result = row * column;

			int tensValue = result / 10;

			int unitValue = result % 10;

			if (column == 0)
			{
				_putchar('0' + unitValue);
			} else
			{
				_putchar(',');
				_putchar(' ');
			if (result >= 10)
			{
				_putchar('0' + tensValue);
			} else
			{
				_putchar(' ');
			}
			_putchar('0' + unitValue);
			}
		}
		_putchar('\n');
	}
}
