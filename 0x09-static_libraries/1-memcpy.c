#include "main.h"
/**
 * _memcpy - function that copies memory value from one to another
 *
 * @dest: destination to be copied to
 * @src: src of memory to copy from
 * @n: number of byte to copy
 *
 * Return: returns pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
