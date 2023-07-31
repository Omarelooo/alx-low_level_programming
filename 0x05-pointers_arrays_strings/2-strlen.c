#include "main.h"

/* _strlen function :  returns the length of a string
 *
 * return (0): Succesful
 */

int _strlen(char *s)
{
	int i;
	for ( i=0; *s != '\0'; s++)
		i++;
	return (i);
}
