#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: A pointer to the memory area (starting address)
 * @b: The constant byte value used to fill the memory with
 * @n: The number of bytes
 *
 * Return: returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
