#include "main.h"

/**
 * _strlen_recursion - counts the length of string
 *
 * @s: string
 *
 * Return: returns the lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	}
	return 0;
}
