#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	char skipChar = 'a';

	while (skipChar <= 'z')
	{
		if (skipChar != 'e' && skipChar != 'q')
		{
			putchar(skipChar);
		}
		skipChar++;
	}
	putchar('\n');
	return (0);
}
