<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
=======
#include <unistd.h>

>>>>>>> eec0c887c8a9b713527b853067874152a6ea4189
/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
