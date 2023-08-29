#include <stdio.h>
/**
 * print_diagsums - sum of the two diagronals of square matric function
 * @a: pointer to 2D array
 * @size: which diagonal to add.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int xDiagonalsum;
	int yDiagonalsum;
	int arraysize;

	xDiagonalsum = 0;
	yDiagonalsum = 0;
	arraysize = (size * size);

	for (i = 0; i < (arraysize); i += size + 1)
		xDiagonalsum += a[i];
	for (i = size - 1; i < arraysize - 1; i += size - 1)
		yDiagonalsum += a[i];
	printf("%d, %d\n", xDiagonalsum, yDiagonalsum);
}
