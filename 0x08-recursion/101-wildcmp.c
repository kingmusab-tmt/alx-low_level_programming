#include "main.h"
/**
 * wildcmp -function to compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: either 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return ((*s1 == '\0'));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
