#include "main.h"
/**
 * _isupper - function to check upper value
 * @c: parameter beign check
 * Return: 1 if parameter is upper and 0 if othersie
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
