#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - locates memory for an array
 * @nmemb: size of memory to allocated
 * @size: size to array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	char *p;

	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	p =  ptr;
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (ptr);
}
