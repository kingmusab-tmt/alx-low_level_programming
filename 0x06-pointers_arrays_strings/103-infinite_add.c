#include <stdio.h>
#include <string.h>
/**
 * infinte_add - Function that add infinite number
 *
 * @n1: p 1
 * @n2: p 2
 * @r: p3
 * @size_r: p4
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1;
	int len2;
	int carry;
	int i;
	int j;
	int k;
	int num1;
	int num2;
	int sum;
	char temp;
	int a;
	int b;

	len1 = strlen(n1);
	len2 = strlen(n2);
	carry = 0;
	i = len1 - 1;
	j = len2 -1;
	k = 0;
	
	if (len1 + 1 > size_r || len2 + 1 > size_r) 
	{
		return 0;
	}

	while (i >= 0 || j >= 0 || carry)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
		
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
	}
	r[k] = '\0';
	
	for (a = 0, b = k - 1; a < b; a++, b--)
	{
		temp = r[a];
		r[a] = r[b];
		r[b] = temp;
	}
	return (r);
}
