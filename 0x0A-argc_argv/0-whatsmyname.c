#include <stdio.h>
/**
 * main - print name of file
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: print its name of executable file
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
