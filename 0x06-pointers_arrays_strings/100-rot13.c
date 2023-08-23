#include "main.h"
/**
 * rot13 - function that encodes a string using ROT13 algorithm
 *
 * @str: parameter used
 *
 * Return: new encoded string
 */
char *rot13(char *str)
{
	int i;
	char c;
	char base;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';
		str[i] = ((c - base + 13) % 26) + base;
	}
	}
	return (str);
}
