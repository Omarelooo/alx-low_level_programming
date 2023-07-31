#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	x = 0;
<<<<<<< HEAD
 	while (src[x] != 0 )
=======
	while (src[x] != 0 )
>>>>>>> 3c4be3f05ef49a406b057487080e2d71181ea0c3
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
