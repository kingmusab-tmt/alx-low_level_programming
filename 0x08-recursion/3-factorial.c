#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: number for factorial
 *
 * Return: the factorial of the number and -1 if number is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
