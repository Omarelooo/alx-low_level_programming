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
	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
