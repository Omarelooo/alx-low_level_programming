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
		printf("%d is negative \n");
	if ( n > 0)
		printf("%d is positive \n");
	else
		printf("%d is 0");
	return (0);
}
