#include "main.h"
/**
 * jack_bauer - a function that prints every minutes of the day
 *
 * Return: void return nothing
 */
void jack_bauer(void)
{
	int hisHours, hisMinutes;

	for (hisHours = 0; hisHours < 24; hisHours++)
	{
		for (hisMinutes = 0; hisMinutes < 60; hisMinutes++)
		{
			_putchar('0' + hisHours / 10);
			_putchar('0' + hisHours % 10);
			_putchar(':');
			_putchar('0' + hisMinutes / 10);
			_putchar('0' + hisMinutes % 10);
			_putchar('\n');
		}
	}
}
