#include "main.h"

/**
<<<<<<< HEAD
 *_puts_recursion - function like puts();
 *@s: input
 *Return: Always 0 (Success)
 **/

void _puts_recursion(char *s)
{
	if (*s)
=======
 * _puts_recursion - function to print letters
 *
 * @s: pointer of string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
>>>>>>> eec0c887c8a9b713527b853067874152a6ea4189
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
<<<<<<< HEAD
	else
	_putchar('\n');
=======
>>>>>>> eec0c887c8a9b713527b853067874152a6ea4189
}
