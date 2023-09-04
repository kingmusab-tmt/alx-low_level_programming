#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - fun tion that copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int lenght;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;
	lenght++;
	if (lenght < 1)
		return (NULL);
	p = malloc(lenght * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
