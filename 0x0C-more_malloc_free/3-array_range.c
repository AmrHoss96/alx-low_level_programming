#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - function creates array of integers
 * @min: min num of int
 * @max: max num of int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;

	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = min;
	for (i = min; i <= max; i++)
		ptr[i] = i;
	return (ptr);
}
