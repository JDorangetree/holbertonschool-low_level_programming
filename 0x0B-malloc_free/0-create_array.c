#include <stdio.h>
#include <stdlib.h>
/**
 * main - print name of file
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: print its name of executable file
 * Return: 0 if it works
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
	{
		return (0);
	}
	str = malloc(sizeof (char) * size);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return(str);
}
