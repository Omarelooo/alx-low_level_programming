#include "main.h"

/**
 * _memset - fills memory with a constant type
 * @s : pointer 
 * @b : constant
 * @n : bytes
 * Return : s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	
	for (x = 0; x < n; x++)
	{
		
		s[x] = b;
	}
	return (s);
}
