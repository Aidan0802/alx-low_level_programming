#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: separates the strings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (n - 1 > i)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
