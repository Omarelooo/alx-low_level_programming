#include "function_pointers.h"

/**
 * print_name - print a name
 *
 *   * @name : a name to print
 *    * @f : a function to point
 *     *
 *      * Return - NOTHING
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}