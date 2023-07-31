#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int x;
	/* Number of chracters will change */
	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
