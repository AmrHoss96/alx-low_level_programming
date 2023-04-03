#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds node to a linked list
 * @head: pointer to a pointer of the first node
 * @n: data entered in the node
 * Return: pointer to a struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	ptr->next = *head;
	ptr->n = n;
	*head = ptr;
	return (ptr);
	free(ptr);
}
