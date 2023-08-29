#include "main.h"
/**
 * _strspn - function  that gets the length of a prefix substring
 *
 * @s: string to be worked on
 * @accept: accepted length of prefix
 *
 * Return: returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
				if (accept[j] == '\0')
				{
					break;
				}
	}
	return (length);
}
