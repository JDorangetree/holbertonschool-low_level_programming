#include "holberton.h"
/**
 * binary_to_uint - Print before main function
 * @b: char to convert to int
 *
 * Description: convert to int a char of 1 and 0;
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len, shift;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		len++;
	}
	len--;
	shift = 0;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			num = num + (1 << shift);
		}
		shift++;
		len--;
	}
	return (num);
}
