#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - allocates memory using
 * @n: total number variable arguments passed.
 * @separator: string to be printed between numbers
 *
 * Description:  prints numbers, followed by a new line.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int j,i;
	char *s;
	float f;
	char c;

	va_start(valist, format);

	while(format[j] != '\0' )
	{
		switch (format[j])
		{
		case 'c':
			c = (char) va_arg(valist, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(valist, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(valist, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(valist, char*);
			printf("%s", s);
			break;
		}
		j++;
	}
	va_end(valist);
}
