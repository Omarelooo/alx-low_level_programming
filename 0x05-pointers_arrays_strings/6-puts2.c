#include "main.h"

/**
 * puts function :  prints every other character of a string, starting with the first character, followed by a new line
 *
 * return (0): Succesful
 */

void puts2(char *str)
{
	int i;
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2 ;
	}
	_putchar('\n');
}
