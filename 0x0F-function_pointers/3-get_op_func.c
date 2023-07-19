#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 *
 * @s: operator passed
 *
 * Return: a pointer that corresponds to the
 * given operator
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);

}
