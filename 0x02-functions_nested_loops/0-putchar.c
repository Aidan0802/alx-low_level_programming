#include "main.h"
/**
 * main - Prints out _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int size = sizeof(a);
	int i;


	for (i = 0; i < size; i++)
	{
	    _putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}

