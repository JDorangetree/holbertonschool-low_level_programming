#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - allocates memory using
 * @n: total number variable arguments passed.
 * @separator: string to be printed between numbers
 *
 * Description:  prints numbers, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;


	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);
		if (str)
		{
			if (!(n - i == 1) && separator)
				printf("%s%s", str, separator);
			else
				printf("%s", str);
		}
		else
		{
			if (!(n - i == 1) && separator)
				printf("(nil)%s", separator);
			else
				printf("(nil)");
		}
	}
	putchar('\n');
	va_end(valist);
}
