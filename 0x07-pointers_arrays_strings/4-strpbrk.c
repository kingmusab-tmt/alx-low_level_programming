#include "main.h"
/**
 * _strpbrk - function for search for characer
 *
 * @s: string to be search
 * @accept: string being searched for
 * Return: returns the characteers
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
