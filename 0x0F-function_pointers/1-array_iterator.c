#include "function_pointers.h"

/**
 * array_iterator - xecutes a function given as a parameter on each
 * element of an array.
 * @array: array of intege
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}