#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 return (Success)
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int count = 0;

	printf("%d, %d", fib1, fib2);
	count += 2;
	while (count < n)
	{
		int fib_next = fib1 + fib2;
		printf(", %d", fib_next);
		fib1 = fib2;
		fib2 = fib_next;
		count++;
	 }
	printf("\n");
	return (0);
}

