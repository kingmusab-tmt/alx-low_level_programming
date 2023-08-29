#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 *
 * @haystack: first parameter
 * @needle: second parameter being searched for
 *
 * Return: returns a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j] && needle[i] != '\0')
			{
				return (&needle[i]);
			}
		}
	}
	return (NULL);
}
