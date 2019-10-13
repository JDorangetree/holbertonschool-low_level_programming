#include <stdio.h>
#include <stdlib.h>
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
	int mult;
	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mult = x * y;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
