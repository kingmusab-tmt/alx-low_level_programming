#include "main.h"
/**
 * leet - function to convert to numbers
 *
 * @str: parameter used
 *
 * Return: char
 */
char *leet(char *str)
{
	char leet_replacements[] = "AaEeOoTtLl";
	char leet_encoding[] = "44337711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_replacements[j] != '\0'; j++)
		{
			if (str[i] == leet_replacements[j])
			{
				str[i] = leet_encoding[j];
				break;
			}
		}
	}
	return (str);
}
