#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints data in a linked list
 * @h: pointer to a structure node
 * Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
