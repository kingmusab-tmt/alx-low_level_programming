#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
