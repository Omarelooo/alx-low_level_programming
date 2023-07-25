#include "main.h"

/**
 * rev_string function : reverse a string
 *
 * return (0): Succesful
 */

void rev_string(char *s)
{
	int i, x;
	char temp[20];
	for (i = 0; s[i] != '\0'; i++)
		;
	x = i;
	int n;
	for ( n = 0; n < x; i--)
	{
		temp[n] = s[i - 1];
		n++;
	}
	strcpy(s,temp);
}
