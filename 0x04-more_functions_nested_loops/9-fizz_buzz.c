#include <stdio.h>
/**
 * main - Fizz Buzz
 *
 * Description: This draws a diagonal line
 * Return: 0 Value if it works
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3) == 0 && (number % 5) != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else
		{
			if ((number % 5) == 0 && (number % 3) != 0)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				if ((number % 5) == 0 && (number % 3) == 0)
				{
					printf("FizzBuzz");
					printf(" ");
				}
				else
				{
					printf("%d", number);
					printf(" ");
				}
			}
		}
	}
		printf("\n");
		return (0);
}
