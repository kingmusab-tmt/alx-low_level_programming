#include <stdio.h>
#include "main.h"
/**
 * _strncat - function to concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: return a point to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
