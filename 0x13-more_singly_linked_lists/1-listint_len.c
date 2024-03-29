#include "lists.h"
/**
 * listint_len - list number of nodes
 * @h: pointer to struct node
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
