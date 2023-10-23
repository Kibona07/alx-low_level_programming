#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform
 * @s: operator passed as argument
 * Return: pointer to function
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
	int k = 0;

	while (ops[k].op)
	{
		if (strcmp(s, ops[k].op) == 0)
			return (ops[k].f);
		k++;
	}
	return (ops[k].f);
}
