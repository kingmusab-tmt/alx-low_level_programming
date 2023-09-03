#include "main.h"
/**
 * more_numbers - function to print 10 times number 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int count = 0;

	int num;

	while (count < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
			_putchar(num / 10 + '0');
			}
			_putchar('0' + num % 10);
		}
		count++;
		_putchar('\n');
	}
}
