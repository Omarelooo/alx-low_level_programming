#include "main.h"
#include <stdio.h>

/* function _memset : change number of chracter with 1 charatcer */

char *_memset(char *s, char b, unsigned int n)
{
	int x;
	/* Number of chracters will change */
	for (x = 0; x < n; x++)
	{
		/* change the chracter with b */
		s[x] = b;
	}
	return (s);
}
