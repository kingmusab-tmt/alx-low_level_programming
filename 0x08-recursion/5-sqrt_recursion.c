#include "main.h"
/**
 * findsquare - function to multiply two number
 * a number
 * @n: natural square
 * @m: number to multiply
 *
 * Return: n, m or recursive
 */
int findsquare(int m, int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	if (n < 0 || m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (findsquare(m + 1, n));
}
/**
 * _sqrt_recursion - function that returns the natural square root of
 * a number
 * @n: square number
 *
 * Return: -1 if no natural square root, else return trhe square root
 */
int _sqrt_recursion(int n)
{
	return (findsquare(1, n));
}
