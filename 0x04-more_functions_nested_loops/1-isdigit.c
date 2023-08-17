#include "main.h"
/**
 * _isdigit - function to check a digit 0 through 9
 *
 * @c: parementer being checked
 * Return: 1 if its a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	c = c - '0';
	if (c >=0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
