#include "main.h"

/**
 * swap_int function : swap two inputs
 *
 * return (0): Successful
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
