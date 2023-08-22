#include "main.h"
#include <stdio.h>
/**
 * print_array - function that pritns n element of array integer
 *
 * @a: first parameter
 * @n: second parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
