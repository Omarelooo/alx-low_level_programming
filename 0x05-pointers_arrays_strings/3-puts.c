#include "main.h"

/**
 * puts function :  prints a string, followed by a new line
 *
 * return (0): Succesful
 */

void _puts(char *str)
{
	while ( *str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
