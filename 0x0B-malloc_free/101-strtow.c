#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordcounter - function that counts words and the letters in them
 * @str: string to be count
 * @pos: position of the word to be count characters start at
 * @firstchar: first letter of the word
 * if pos = 0, count the number of chars in the word
 * else count number of words
 * Return: wordcount if 0
 * length of word if  > 0,
 * position of word if  > 0 and firstchar > 0
 */
int wordcounter(char *str, int pos, char firstchar)
{
	int i;
	int wordcount;
	int charcount;
	int flag;

	str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordcount)
		{
			if (pos > 0 && pos == wordcount && firstchar > 0)
				return (i);
			for (charcount = 0; str[i + charcount + 1] != ' '; charcount++)
				;
			return (charcount);
		}
		if (str[i] == ' ')
			flag = 0;
	}
	return (wordcount);
}
/**
 * strtow - function to convert a string into a 2 dimentional
 * array of words
 * @str: string to convert
 * Return: double pointer to 2dimentioonal array
 */
char **strtow(char *str)
{
	int wc, wordlen;
	int getfirstchar;
	int len;
	int i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	wc = wordcounter(str, 0, 0);
	if (len == 0 || wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		wordlen = wordcounter(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordlen++;
		p[i] = malloc((wordlen + 1) * sizeof(char));
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		getfirstchar = wordcounter(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfirstchar++;
		else if (str[0] == ' ')
			getfirstchar++;
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[getfirstchar + j];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}
