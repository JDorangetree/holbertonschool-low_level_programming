#include "holberton.h"
/**
 * cap_string - compare two string
 * @s: array to upper
 *
 * Description: reverses the content of an array
 * Return: array upper
 */
char *cap_string(char *s)
{
	int n;
	int se;
	int separator[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	n = 0;
	if (s[n] >= 97 && s[n] <= 122)
	{
		s[n] = s[n] - 32;
	}
	while (s[n] != '\0')
	{
		se = 0;
		while (se <= 12)
		{
			if((s[n - 1] == separator[se]) && (s[n] >= 97 && s[n] <= 122))
			{
				s[n] = s[n] - 32;
			}
			se++;
		}
		n++;
	}
	return (s);
}
