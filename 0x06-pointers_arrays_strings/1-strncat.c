#include "main.h"

/**
 * _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
 *
 * return 0: succesful
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;
        c = 0;
        while (dest[c])
                c++;
        for (i = 0; i < n && src[i] != '\0'; i++)
                dest(c + i) = src[i];
	dest[c + i] = '\0';

        return (dest);
}

