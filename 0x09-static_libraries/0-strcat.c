#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
