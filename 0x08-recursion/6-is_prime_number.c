#include "main.h"
/**
 * primeValue - function to check the prime
 * @n: actual number
 * @i: value for product
 *
 * Return: 1 or 0
 */
int primeValue(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return primeValue(n, i + 1);
}
/**
 * is_prime_number - function that checks for primse number
 *
 * @n: number to be checked
 * return: 1 if the integer is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 0 || n <= 1)
	{
		return (0);
	}
	return (primeValue(n, 2));
}
