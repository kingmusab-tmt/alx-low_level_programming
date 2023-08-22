#include "main.h"
/**
 * swap_int - Function to swap the values of two integers
 *
 * @a: first aparemeter
 * @b: second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
