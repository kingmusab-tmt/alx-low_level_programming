#include "main.h"
/**
 * _strlen - Function that returns the length of string
 *
 * @s: parameter used
 * Return: return the length value
 */
int _strlen(char *s)
{
	int len = 0;


	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
