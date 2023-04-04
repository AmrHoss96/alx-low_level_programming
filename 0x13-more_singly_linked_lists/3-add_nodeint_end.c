#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to a linked list
 * @head: pointer to a pointer of the first node
 * @n: data entered in the node
 * Return: pointer to a struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *ptr;

	end_node = *head;
	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
		*head = end_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = end_node;
	}
	return (end_node);
}
