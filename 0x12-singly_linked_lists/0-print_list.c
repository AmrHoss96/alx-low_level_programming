#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints number of nodes
 * @h: struct pointer
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
