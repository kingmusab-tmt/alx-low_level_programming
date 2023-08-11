#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	int count = 0;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i != j)
			{
				if (count > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + i);
				putchar('0');
				putchar(' ');
				putchar('0' + j);
				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}

