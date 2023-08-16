#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - function to pritns all natural numbers from n to 98
 *
 * @n: value to print against 98
 *
 * Return: return void
 */
void print_to_98(int n)
{
	int nNew;

	if (n > 98)
	{
		for (nNew = n; nNew >= 98; nNew--)
		{
			printf("%d", nNew);

			if (nNew != 98)
			{
			printf(", ");
			}
		}
	} else
	{
		for (nNew = n; nNew <= 98; nNew++)
		{
			printf("%d", nNew);

			if (nNew != 98)
			{
				printf(", ");
			}
		}
	}
		printf("\n");
}
