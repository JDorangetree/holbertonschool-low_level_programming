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
			putchar(32);
		}
		else
		{
			if ((number % 5) == 0 && (number % 3) != 0)
			{
				printf("Buzz");
				putchar(32);
			}
			else
			{
				if ((number % 5) == 0 && (number % 3) == 0)
				{
					printf("FizzBuzz");
					putchar(32);
				}
				else
				{
					printf("%d", number);
					putchar(32);
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
