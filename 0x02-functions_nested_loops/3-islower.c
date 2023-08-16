#include "main.h"
/**
 * _islower - function use to check for lowercase character
 *
 * @c: a parameter to be check
 *
 * Return: return 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	int letter = c;

	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	return (0);
}
