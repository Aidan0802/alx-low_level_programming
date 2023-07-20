#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by newline
 *
 * @separator: separats number
 * @n: const number input
 * @...: multiple arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%i", x);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
