#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get nodes at certain index
 * @head: pointer to the first node
 * @index: index of nodes
 * Return:  pointer to the first node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *ptr2;
	unsigned int i;

	ptr = head;
	ptr2 = malloc(sizeof(listint_t));
	ptr2->next = NULL;
	if (ptr2 == NULL)
		return (NULL);
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
}
