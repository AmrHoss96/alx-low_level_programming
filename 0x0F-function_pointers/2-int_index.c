#include "function_pointers.h"
/**
 * int_index - function that return index
 * @array: string
 * @size: size of array
 * @cmp: function pointer
 * Return: -1 for no match, index of int for match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
