#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - allocates memory using
 * @n: total number variable arguments passed.
 * @separator: string to be printed between numbers
 *
 * Description:  prints numbers, followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;


	va_start(valist, n);

	if (separator)
	{

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (!(n - i == 1))
				printf("%s", separator);
		}
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
		}
		putchar('\n');
	}
	va_end(valist);
}
