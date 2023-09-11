#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog and stores a copy of name and owner
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to the new dog (dog_t) or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = name;
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->owner = owner;
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
