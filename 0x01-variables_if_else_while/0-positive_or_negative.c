#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - entry point
 *
 * Description: posite or neagative
 *
 * return: 0 (success ) */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n < 0)
		printf("%i is negative \n", n);
	else 	if ( n > 0)
			printf("%i is positive \n", n);
	else
		printf("%i is 0", n);
	return (0);
}
