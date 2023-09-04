#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int count1;
	int count2;
	int bufferSize;
	int i;

	/*Check for valid strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count1 = 0; s1[count1]; count1++)
		;
	for (count2 = 0; s2[count2]; count2++)
		;
	bufferSize = count1 + count2 + 1;
	p = malloc(BufferSize * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < BufferSize; i++)
		i < count1 ? (p[i] = s1[i]) : (p[i] = s2[i - count1]);
	return (p);
}
