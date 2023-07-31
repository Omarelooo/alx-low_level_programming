#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	x = 0;
	while (src[x] != 0)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
