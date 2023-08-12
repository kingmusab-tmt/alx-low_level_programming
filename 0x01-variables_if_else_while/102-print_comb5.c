#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		int tens_i = i / 10;

		int ones_i = i % 10;

		for (j = i + 1; j < 100; j++)
		{
			int tens_j = j / 10;
			
			int ones_j = j % 10;
			
			putchar(tens_i + '0');
			putchar(ones_i + '0');
			putchar(' ');
			putchar(tens_j + '0');
			putchar(ones_j + '0');
			if (i == 98 && j == 99)
			{
				putchar('\n');
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
