#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at certain index
 * @head: pointer to first node
 * @index: position of node
 * Return: 1 if succes, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	temp = *head;
	new_node = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || (temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	new_node = temp->next;
	temp->next = new_node->next;
	free(new_node);
	return (1);
}
