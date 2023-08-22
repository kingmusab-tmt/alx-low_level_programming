#include "main.h"
/**
 * _puts - Function that prints a string
 *
 * @str: string paramete
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
