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
 * is_palindrome_recursive - Check if a string is a palindrome recursively.
 * @s: The string to check.
 * @forward: The index for the forward traversal.
 * @backward: The index for the backward traversal.
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome_recursive(char *s, int forward, int backward)
{
	if (forward >= backward)
	{
		return (1);
	}
	if (s[forward] != s[backward])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, forward + 1, backward - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
