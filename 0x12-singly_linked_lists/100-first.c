#include "lists.h"
void first_output(void)__attribute__((constructor));
/**
 * first_output - Print before main function
 * @void: Empty parameter
 *
 * Description: Prints before main file
 * Return: Nothing
 */
void first_output(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
