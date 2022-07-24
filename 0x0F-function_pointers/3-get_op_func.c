#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: operator
 * @a: first
 * @b: second
 * Return: pointer
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
	int i = 0;

	while(i < 6)
	{
		if (s[0] == ops->op[i])
			break;
	}
	return (ops[i / 2].f);
}
