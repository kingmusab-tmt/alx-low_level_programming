#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - entry point 
 * @argc: argment counrter
 * @argv: array of argument
 * Return: 1 error 2 error and 0 ALways succes
 */
int main(int argc, char *argv[])
{
	char *start;
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	start = (char *)main;
	print_opcodes(start, num_bytes);
	return 0;
}
/**
 * print_opcodes: function to print main opcodes
 * start: staring point
 * @num_bytes: number of bytes
 * Return: opcodes in hexa
 */
void print_opcodes(char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02hhx ", start[i]);
	}
	printf("%02hhx\n", start[i]);
}
