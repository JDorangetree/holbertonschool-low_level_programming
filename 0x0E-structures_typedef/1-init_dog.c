#include "dog.h"
/**
 *init_dog - checks a character
 *
 *@d: parameter
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 * Description: This checks for uppercase charater
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
