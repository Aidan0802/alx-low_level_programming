#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all arguments
 *
 * @n: first number:
 * @...: multiple arguments
 *
 * Return: the sum of all arguments
 * returns 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		res += va_arg(args, int);

	va_end(args);
	return (res);
}
