#include "main.h"
/**
 * print_numbers - function that prints the number from 0 to 9
 *
 * Return: result
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
