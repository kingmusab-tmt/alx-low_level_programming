#include "main.h"
/**
 * _strcpy - function that copies the string pointed to
 *
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *string = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (string);
}
