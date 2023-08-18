#include <stdio.h>
/**
 * main - ENtry point
 *
 * Return: Always 0 return (success)
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_prime = 2;

	while (num > 1)
	{
		if (num % largest_prime == 0)
		{
			num /= largest_prime;
		} else
		{
			largest_prime++;
		}
	}
	printf("%lu\n", largest_prime);

	return (0);
}
