#include "main.h"
/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 * 
 * Return void;
 */
void print_number(int n)
{
	int temp;
	int divisor;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	divisor = 1;
	temp = n;
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor != 0)
	}
	_putchar((n / divisor) + '0');
	n %= divisor;
	divisor /= 10;
    }
}
