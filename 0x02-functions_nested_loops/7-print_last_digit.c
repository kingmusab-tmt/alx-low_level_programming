#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: input number (parameter)
 *
 * Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int nNew = n % 10;

	if (nNew < 0)
	{
		nNew = -nNew;
	}
	_putchar('0' + nNew);
	return (nNew);
}
