#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: String name
 * @age: Int age
 * @owner: String owner
 *
 * Description: Creates a new dog
 * Return: The new dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex;

	if (name == NULL || owner == NULL)
		return (NULL);
	rex = malloc(sizeof(dog_t));
	if (rex == NULL)
	{
		free(rex);
		return (NULL);
	}
	(*rex).name = name;
	(*rex).age = age;
	(*rex).owner = owner;
	return (rex);
}
