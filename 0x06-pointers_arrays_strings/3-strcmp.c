#include "main.h"
/**
 * _strcmp - function compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}
