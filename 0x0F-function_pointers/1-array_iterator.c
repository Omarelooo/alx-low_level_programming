#include "function_pointers.h"

/**
 * array_iterator - function to print numbers
 *  *
 *   * @array : array have numbers
 *    * @size : size of the array
 *     * @action : function to point
 *      *
 *       * Return : NOTHING
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = size;
	int i;

	for (i = 0; i < x; i++)
		(*action)(*array++);
}
