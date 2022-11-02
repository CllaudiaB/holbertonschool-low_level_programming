#include "function_pointers.h"

/**
 *array_iterator
 *@array: array to print
 *@size_t: size of array
 *@action: function pointer
 *
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
