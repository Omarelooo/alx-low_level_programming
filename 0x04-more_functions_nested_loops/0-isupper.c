#include "main.h"

/*
 *Uppercase or Lowercase
 *
 * _isupper: check function for uppercase
 *
 * Return (0): Succesful
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

