#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return success
 */
int main(void)
{
	unsigned long fib1 = 1;

	unsigned long fib2 = 2;
	unsigned long sum = 0;
	unsigned long temp;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		temp = fib2;

		fib2 = fib1 + fib2;
		fib1 = temp;
	}
	printf("%lu\n", sum);
	return (0);
}

