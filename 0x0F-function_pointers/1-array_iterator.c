#include "function_pointers.h"
/**
 * array_iterator - iterates into an array
 * @array: string
 * @size: size of string
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
