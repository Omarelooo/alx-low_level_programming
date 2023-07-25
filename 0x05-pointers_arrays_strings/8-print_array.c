#include "main.h"
#include <stdio.h>

/**
 * print_array function :  prints n elements of an array of integers, followed by a new line
 *
 * return (0): Succesful
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
}
