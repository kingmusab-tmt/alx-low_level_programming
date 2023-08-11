#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	int count = 0;

	for (int i = 0; i <= 8; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (count > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			count++;
		}
	}
	putchar('\n');
	return (0);
}

