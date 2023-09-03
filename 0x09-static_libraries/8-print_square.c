#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: size of square
 *
 * Return: return void
 */
void print_square(int size)
{
	int count = 0;
	int mul;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (count < size)
	{
		for (mul = 0; mul < size; mul++)
		{
			_putchar('#');
		}
		count++;
		_putchar('\n');
	}
}
