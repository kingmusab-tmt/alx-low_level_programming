#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int forward = 0;
	int backward = _strlen_recursion(s) - 1;

	while (forward < backward)
	{
		if (s[forward] != s[backward])
		{
			return (0);
		}
		forward++;
		backward--;
	}
	return (1);
}
