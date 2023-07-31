#include "main.h"
#include <string.h>

/**
 * rev_string function : reverse a string
 *
 * return (0): Succesful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void rev_string(char *s)
{
	int i, x, n;
	char temp[20];
	for (i = 0; s[i] != '\0'; i++)
		;
	x = i;
	for ( n = 0; n < x; i--)
	{
		temp[n] = s[i - 1];
		n++;
	}
	strcpy(s,temp);
}
