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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
