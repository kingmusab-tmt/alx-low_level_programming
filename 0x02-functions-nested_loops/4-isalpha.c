#include "main.h"
/**
 * _islower - function for checking lowrcase & uppercase character
 *
 * @c: parameter to be checked
 *
 * Return: return 1 if c is lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	int letter = c;

	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	return (0);
}
