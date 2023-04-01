#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - prints number of nodes
 * @h: struct pointer
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
