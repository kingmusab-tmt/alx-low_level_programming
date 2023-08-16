#include "main.h"
/**
 * print_alphabet - function for printing alphabet
 *
 * Return: Always return void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
