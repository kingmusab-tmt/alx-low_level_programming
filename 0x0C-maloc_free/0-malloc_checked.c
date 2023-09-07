#include <stdlib.h>
/**
  * malloc_checked - function to allocates memory using malloc
  * @b: size of buffer
  * Return: pointer to buffer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
