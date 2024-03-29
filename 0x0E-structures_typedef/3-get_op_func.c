#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func- fucntion pointer
 * @s: operator that is pointed to by function
 * Return: return a pointer to the fucntion indicated by character s
 */

int (*get_op_func(char *s))(int, int)
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

	while (ops[i])
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
