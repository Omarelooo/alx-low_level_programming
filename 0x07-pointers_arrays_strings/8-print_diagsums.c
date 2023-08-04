#include "main.h"

/**
 * print_diagsums - description
 * @a : array of int types 
 * @size : size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;
	for (i = 0; i < size; i++)
	{
		j += a[i];
		k += a[size - i - 1];
		a += size;
	}
	printf("%d, ",j);
	printf("%d\n",k);
}
