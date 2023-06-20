#include "main.h"
/**
 * main - Prints out _putchar
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char a[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 7; i++)
	{
	    _putchar(a[i]);
	}
	_putchar('\n');
	    return 0;
}

