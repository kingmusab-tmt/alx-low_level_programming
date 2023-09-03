#include "main.h"
/**
 * print_triangle - function to print triangle shape
 *
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 0; b < size - a; b++)
		{
			_putchar(' ');
		}
		for (b = 0; b < a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
