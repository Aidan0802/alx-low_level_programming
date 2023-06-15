#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int char_s = sizeof(char);
	int int_s = sizeof(int);
	int long_int_s = sizeof(long int);
	int long_long_s = sizeof(long long);
	int float_s = sizeof(float);

	printf("Size of a char: %i byte(s)\n", char_s);
	printf("Size of a int: %i byte(s)\n", int_s);
	printf("Size of a long int: %i byte(s)\n", long_int_s);
	printf("Size of a long long: %i byte(s)\n", long_long_s);
	printf("Size of a float: %i byte(s)\n", float_s);
	
	return (0);
}	
