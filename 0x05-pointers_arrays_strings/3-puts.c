#include "main.h"

/**
 * puts function :  prints a string, followed by a new line
 *
 * return (0): Succesful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _puts(char *str)
{
	while ( *str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
