#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: list of types of argument
 *
 * Description:  prints anything.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int j = 0;
	char *s, *sep;

	va_start(valist, format);

	while (format && format[j] != '\0')
	{
		sep = "";
		if (j >= 0 && format[j + 1] != 0)
			sep = ", ";
		switch (format[j])
		{
		case 'c':
			printf("%c%s", (char) va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", (float) va_arg(valist, double), sep);
			break;
		case 's':
			s =  va_arg(valist, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", s, sep);
			break;
		default:
			break;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
