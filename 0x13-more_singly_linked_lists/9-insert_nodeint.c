#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - add node at a certain index
 * @head: pointer to pointer of first node
 * @idx: index at which node will be added
 * @n: data to be added
 * Return: pointer to added node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;

	if ((*head) == NULL)
		return (NULL);
	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));
	ptr2->n = n;
	ptr2->next = NULL;
	if (ptr2 == NULL)
		return (NULL);
	if (idx == 0)
	{
		*head = ptr2;
		ptr2->next = ptr;
	}
	else
	{
	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	}
	return (ptr2);
}
