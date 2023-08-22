#include "main.h"
/**
 * puts2 - function that prints every otehr character
 *
 * @str: parameters used
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
		len = len + 1;
	}
	_putchar('\n');
}
