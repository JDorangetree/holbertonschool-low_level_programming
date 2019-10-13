#include <stdio.h>
/**
 * main - print  number of argument
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: print number of argument
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argv;
	i = 0;
	while (i < argc)
	{
		++i;
	}
	printf("%d\n", (i - 1));
	return (0);
}
