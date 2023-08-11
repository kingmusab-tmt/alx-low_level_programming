#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	int count = 0;

	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1 + i; j <= 8; j++)
		{
			for (k = 1 + j; k <= 9; k++)
			{
				if (count > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
