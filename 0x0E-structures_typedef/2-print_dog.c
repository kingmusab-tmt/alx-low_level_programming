#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name;
		float age = d->age;
		char *owner = d->owner;

		if (name == NULL)
		{
			name = "(nil)";
		}
		if (owner  == NULL)
		{
			owner = "(nil)";
		}
		printf("Name: %s\n", name);
		printf("Age: %.6f\n", age);
		printf("Owner: %s\n", owner);
	}
}
