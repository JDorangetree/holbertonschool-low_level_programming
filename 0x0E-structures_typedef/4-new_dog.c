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
	char *new_name, *new_owner;
	int i, j, x;

	if (name == NULL || owner == NULL)
		return (NULL);
	rex = malloc(sizeof(dog_t));
	if (rex == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		i++;
	new_name = malloc(sizeof(char) * (i + 1));
	if (new_name == NULL)
	{
		free(rex);
		return (NULL);
	}
	j = 0;
	while (owner[j] != '\0')
		j++;
	new_owner = malloc(sizeof(char) * (j + 1));
	if (new_owner == NULL)
	{
		free(rex);
		free(new_name);
		return (NULL);
	}
	for (x = 0; x <= i; x++)
		new_name[x] = name[x];
	new_name[x] = '\0';
	for (x = 0; x <= j; x++)
		new_owner[x] = owner[x];
	new_owner[x] = '\0';
	(*rex).name = new_name;
	(*rex).age = age;
	(*rex).owner = new_owner;
	return (rex);
}
