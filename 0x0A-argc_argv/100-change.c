#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checks for valid input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int checker(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (!isdigit(argv[i][j]))
				return (1);
	return (0);
}
/**
 * main - Prints the minimum number of coins
 * to make change for an amount of cents.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int cents;
	int coins;

	cents = coins = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (checker(argc, 1, 0, argv) == 0)
		{
			cents = atoi(argv[1]);
			while (cents > 0)
			{
				if (cents >= 25)
				{
					coins++;
					cents -= 25;
				} else if (cents >= 10)
				{
					coins++;
					cents -= 10;
				} else if (cents >= 5)
				{
					coins++;
					cents -= 5;
				} else
				{
					coins++;
					cents -= 1;
				}
			}
			printf("%d\n", coins);
		}
	} else
		printf("Error\n");
	return (0);
}
