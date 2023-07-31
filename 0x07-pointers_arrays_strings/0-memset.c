#include "main.h"
<<<<<<< HEAD

char *_memset(char *s, char b, unsigned int n)
{
    int x;
    for (x = 0; x < n; x++)
    {
        s[x] = b;
    }
    return (s);
=======
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
>>>>>>> 6fdf69cb06541b8a4fcfd7ce511704bf74dc1c9f
}
