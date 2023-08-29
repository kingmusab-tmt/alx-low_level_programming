#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: returns pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *a;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			a = &s[i];
			return (a);
		}
	}
	return (NULL);
}
