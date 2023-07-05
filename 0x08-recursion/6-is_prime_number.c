#include "main.h"

/**
 * is_prime_number - find the prime number
 *
 * @n: input integer
 *
 * Return: returns 0 if its a prime number
 * returns 1 if its not
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);
	else if (n <= 1)
		return (0);
	else
		return (1);
}
