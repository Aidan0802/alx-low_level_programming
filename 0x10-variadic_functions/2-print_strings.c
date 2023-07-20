#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: separates the strings
 * @n: number of strings
 *
 * Return: void
 */

void print_string(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;
	char *s;
	
	va_start(args, separator);
	for (i = 0; separator[i]; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL)
			if (s[i + 1] != '\0')
				printf("%s ", separator);
	}
}
