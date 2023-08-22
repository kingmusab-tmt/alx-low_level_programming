#include "main.h"
/**
 * print_rev - Function that prints string in reverse
 *
 * @s: parameter used
 * Return: void
 */
void print_rev(char *s)
{
	int len1 = 0;
	int len2;

	while (s[len1] != '\0')
	{
		len1++;
	}
	len2 = len1;
	while (len2 >= 0)
	{
		_putchar(s[len2]);
		len2--;
	}
	_putchar('\n');
}
