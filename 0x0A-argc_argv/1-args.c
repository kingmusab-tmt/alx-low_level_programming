#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry poin
 * @argc: count of arg passed
 * @argv: value in arg value passed
 *
 * Return: return 0 for success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		**argv = **argv;
	}
	printf("%d\n", argc - 1);
	return (0);
}
