#include "main.h"

/**
 * _strspn - gets the length of a perfix substring
 *
 * @s: string
 * @accept: bytes
 * Rerurn : unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned x, y;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
			return (x);
		}
	}
	return (x);
}
