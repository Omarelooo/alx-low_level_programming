#include "main.h"

/**
 * _stract - function that concatenates two strings
 *
 * return 0: success
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;
	// size of dest
	while (dest[c])
		c++;
	// after the null value : put the char in the src arr
	for (c2 = 0; src[c2]; c2++)
		dest(c++) = src[c2];
	return (dest);
}
