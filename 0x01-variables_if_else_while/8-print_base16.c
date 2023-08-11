#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	int number = 0;

	char alphabet = 'a';

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}
	while (alphabet < 'g')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
