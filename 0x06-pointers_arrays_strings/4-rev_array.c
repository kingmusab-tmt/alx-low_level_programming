#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function that reverse array
 * @a: first parameter
 * @n: second parameter used
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
