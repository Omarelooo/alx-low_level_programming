#include "main.h"

/**
 * _memcpy - copies
 * @dest : memory area
 * @src : source 
 * @n : length of src to be copied 
 * return : pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
<<<<<<< HEAD
	x = 0;
	while (src[x] != 0 )
=======
	for (x = 0; x < n; x++)
>>>>>>> 68206d7b69d989e0f53dd89c5fc46adf6f450c36
	{
		dest[x] = src[x];
	}
	return (dest);
}
