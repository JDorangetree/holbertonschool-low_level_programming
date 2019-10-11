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
	long int num_fib;
	long int prenum_fib;
	long int src;
	long int sum;
	long int src_sum;

	num_fib = 2;
	prenum_fib = 1;
	sum = 0;
	while (num_fib < 2178309)
	{
		if (num_fib <= 2)
		{
			sum = prenum_fib + num_fib;
		}
		src = num_fib;
		src_sum = sum;
		num_fib = num_fib + prenum_fib;
		sum = src_sum + num_fib;
		prenum_fib = src;
	}
	printf("%li\n", sum);
	return (0);
}
