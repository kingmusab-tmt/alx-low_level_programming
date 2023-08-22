#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: parameter used
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
		while (half < len - 1)
		{
			_putchar(str[half + 1]);
			half++;
		}
		_putchar('\n');
	} else
	{
	half = len / 2;
	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
	}
}

