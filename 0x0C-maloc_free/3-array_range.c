#include <stdlib.h>
#include <stdio.h>
/**
  * _abs - function that get absolute value
  * @n: number to calculate the abosulte value
  * Return: absolute value of the number
  */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
/**
  * array_range - function that creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *p;
	int vrange, i;

	if (min > max)
		return (NULL);
	vrange = max - min + 1;
	p = malloc(vrange * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < vrange; min++, i++)
		p[i] = min;
	return (p);
}
