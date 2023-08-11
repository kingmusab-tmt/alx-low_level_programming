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

	while (number < 10)
	{
		putchar('0' + number);
		if (number < 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		number++;
	}
	return (0);
}
