#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to y
 *
 * @x: base
 * @y: power
 *
 * Return: -1 if y is lower than 0 else return the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
