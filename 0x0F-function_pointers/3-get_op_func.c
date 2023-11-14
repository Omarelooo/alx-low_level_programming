#include "3-calc.h"

/**
 * get_op_func - operataor function
 *  *
 *   * @s: operator
 *    *
 *     * Return: the right operator function
 *      *
 **/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sup},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		};

	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].f);
		}
			i++;
	}

	return (NULL);
}
