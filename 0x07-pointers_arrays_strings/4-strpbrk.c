#include "main.h"

/**
 * _strbrk - search a string for any of a ser of bytes
 *
 * @s : string 
 * @accept : string to match
 * Return : pointer to the byte in s that matches one of the bytes in accept 
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}

