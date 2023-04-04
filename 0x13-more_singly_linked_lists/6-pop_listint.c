#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes first node of a linked list
 * @head: pointer to pointer to first node
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head != NULL)
	{
		temp = *head;
		value = (*head)->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		return (value);
	}

	else
		return (0);

}
