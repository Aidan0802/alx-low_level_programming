#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of type arguments
 * @...: multiple arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, n;
	va_list args;
	const char format_args[] = "cifs";
	char *s;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *)
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(args, char *));
				break;
		}
		while (format_args[n])
		{
			if (format[i] == format_args[n] && format[i + 1] != '\0')
				printf(", ");
			n++;
		}
		n = 0, i++;
	}
	printf("\n"), va_end(args);
}
