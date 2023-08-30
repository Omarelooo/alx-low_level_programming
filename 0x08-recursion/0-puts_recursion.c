#include "main.h"

void _puts_recursion(char *s)
{
	char c;
	
	c = s[0];
	if ( c == '\0' )
		break;
	printf("%d",c);
	c++;
}
