#include "function_pointers.h"

/** int_index - function searchs for an integer
 *  *
 *   * @array : array of numbers
 *    * @size : size of the array
 *     * @cmp : comparison function
 *      *
 *       * Return : Index
 *        */

int int_index(int *array, int size, int (*cmp)(int))
{
	    if (size <= 0)
		        {
				        return -1;
					    }

	        for (int i = 0; i < size; i++)
			    {
				            if (cmp(array[i]) != 0)
						            {
								                return i;
										        }
					        }

		    return -1;
}