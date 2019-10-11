#include <stdio.h>
/**
 * main - Prints the 9 times table, starting with 0
 * @void: the evaluated input
 *
 * Description: Prints the n times table, starting with 0
 * Return: 0 value
 */
int main(void)
{
	int n;
	int count;
	int sum;

	n = 1024;
	count = 0;
	sum = 0;
	while (count < n)
	{
		if (count % 5 == 0 || count % 3 == 0)
		{
			sum = sum + count;
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
