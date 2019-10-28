#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - allocates memory using
 * @n: total number variable arguments passed.
 *
 * Description: allocates memory using
 * Return: a pointer to the array
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}
	va_end(valist);

	if (n)
	{
		return (sum);
	}
	else
	{
		return (0);
	}
}
