#include <stdio.h>
/**
 * _atoi - function to conver to string
 *
 * @s: parameter used
 * Return: 0 if no number, integer is interge exist
 */
int _atoi(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while ((len - 1) >= 0)
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
		printf("%d", (s[len - '0']));
		}
		len--;
	}
	return (2);
}
