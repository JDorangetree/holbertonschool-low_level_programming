#include <stdio.h>
/**
 * main - prints arguments
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: prints arguments
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}
