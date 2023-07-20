#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by newline
 *
 * @seperator: separats number
 * @n: const number input
 * @...: multiple arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
		printf("%i%s ", va_arg(args, int), separator);
	
	va_end(args);
	printf("\n");
}
