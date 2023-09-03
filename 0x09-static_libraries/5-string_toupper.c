#include "main.h"
/**
 * string_toupper - function to change lower to upper cases
 *
 * @str: lower case parameter
 *
 * Return: return upper case parameter
 */
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (original_str);
}
