#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @num: integer to be print
 * Return: void
 */
void print_number(int num)
{
	int divisor;
	int n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	divisor = 1;
	n = num;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar('0' + n /divisor);
		n %= divisor; 
		divisor /= 10;
	}
}
