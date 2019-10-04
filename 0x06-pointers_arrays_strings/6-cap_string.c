#include "holberton.h"
/**
 * cap_string - compare two string
 * @s: array to upper
 *
 * Description: reverses the content of an array
 * Return: s
 */
char *cap_string(char *s)
{
	int n;
	int se;
	int separator[] = {32, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 9};


	n = 0;
	while (s[n] != '\0')
	{
		if((s[n] >= 97 && s[n] <= 122))
		{
			for (se = 0; se <= 12; se++)
			{
				if (separator[se] == s[n - 1])
				{
					s[n] = s[n] - 32;
				}
			}
		}
		n++;
	}
	return (s);
}
