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
	long int count;
	long int num_fib;
	long int prenum_fib;
	long int src;

	num_fib = 2;
	count = 56;
	prenum_fib = 1;
	while (count > 1)
	{
		if (num_fib <= 2)
		{
			printf("%li, ", prenum_fib);
			printf("%li, ", num_fib);
		}
		src = num_fib;
		num_fib = num_fib + prenum_fib;
		printf("%li, ", num_fib);
		prenum_fib = src;
		count--;
	}
	num_fib = num_fib + prenum_fib;
	printf("%li\n", num_fib);
	return (0);
}
