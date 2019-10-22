#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: define structur of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
