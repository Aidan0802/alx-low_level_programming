#include "variadic_functions.h"

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
	int i = 0, n = 0;
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
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		while (format_args[n])
		{
			if (format[i] == format_args[n] && format[i + 1] != '\0')
			{
				printf(", ");
				break;
			} n++;
		}
		n = 0, i++;
	}
	printf("\n"), va_end(args);
}
