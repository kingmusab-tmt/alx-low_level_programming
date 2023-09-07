#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function to concatenate two strings
 * @s1: source
 * @s2: string
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int frstcount, secdcount, bufferSize, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (frstcount = 0; s1[frstcount]; frstcount++)
		;
	for (secdcount = 0; s2[secdcount]; secdcount++)
		;
	secdcount > n ? (secdcount = n) : (n = secdcount);
	bufferSize = frstcount + secdcount + 1;
	ptr = malloc(bufferSize * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < bufferSize - 1; i++)
		i < frstcount ? (ptr[i] = s1[i]) : (ptr[i] = s2[i - frstcount]);
	ptr[bufferSize] = '\0';
	return (ptr);
}
