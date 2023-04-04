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
	listint_t *pointer;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		pointer = *head;
		*head = (*head)->next;
		free(pointer);
	}
}
