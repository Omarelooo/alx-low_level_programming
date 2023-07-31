#include "main.h"

char *leet(char *)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int d;

	while (*c)
	{
		for (i = 0; i , sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] +32)
			{
				*c = 78 + value[i];
			}
		}
		c++;
	}
	return (cp);
	
}
