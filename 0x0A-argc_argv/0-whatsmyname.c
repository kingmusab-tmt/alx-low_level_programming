#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to the program
 * @argc - number of argment
 * @argv - argument values in console
 * Return: return 0 for sucess
 */
int main (int argc, char* *argv)
{
	int i;

	for (i = 0; i < argc;  i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
