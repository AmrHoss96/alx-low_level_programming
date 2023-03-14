#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - create array of hexa of a character
 * @size: size of memory allocation
 * @c: character to be allocated
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;

	if (size == 0)
		return (NULL);
	pointer = malloc(sizeof(c) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	else
	{
		while (size > 0)
		{
			pointer[size] = c;
			size--;
		}
	}
	return (pointer);
}
