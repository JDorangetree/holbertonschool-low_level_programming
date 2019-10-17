#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 * Description: This is going print us all numbers from 0 to 99
 * Return: 0 Value if it works
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (!(i == 98 && j == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
