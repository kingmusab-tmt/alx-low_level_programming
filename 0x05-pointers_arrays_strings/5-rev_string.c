#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: parameer used
 * Return: void
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int alength;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	alength = len - 1;

	while (i < alength)
	{
		temp = s[i];
		s[i] = s[alength];
		s[alength] = temp;
		i++;
		alength--;
	}
}
