#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to a pointer of the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *ptr;

	if (*head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	*head = NULL;
}
