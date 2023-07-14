#include <stdio.h>

/* DEscription */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
