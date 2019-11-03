#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: String
 *
 * Description: Convert a string to an integer
 * Return: number int value
 */
int _atoi(char *s)
{
	int num = 0; 
        int sign = 0; 
        int lenght = 0;
	unsigned int n = 0;

	while (s[lenght] != '\0')
	{
		if (s[lenght] == 45)
		{
			sign++;
		}
		if (s[lenght] >= 48 && s[lenght] <= 57)
		{
			n = 10 * n + (s[lenght] - 48);
			if (s[lenght + 1] < 48 || s[lenght + 1] > 57)
				break;
		}
		lenght++;
	}
	if (sign % 2 == 0)
		num = n;
	else
		num = n * -1;
	return (num);
}
