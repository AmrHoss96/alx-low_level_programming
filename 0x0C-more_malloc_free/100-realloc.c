#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to newly reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1, *pointer2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	pointer1 = malloc(new_size);
	if (pointer1 == NULL)
		return (NULL);
	pointer2 = pointer1;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer1[i] = pointer2[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer1[i] = pointer2[i];
	}
	free(ptr);
	return (pointer1);
}
