#include "holberton.h"
/**
 * _memset - compare two string
 * @b: new valor
 * @n: pisition
 * @s: pointer to buffer
 *
 * Description: fill memory with a constant byte
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion (s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}

}
