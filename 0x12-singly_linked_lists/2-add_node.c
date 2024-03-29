#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - prints number of nodes
 * @head: is a pointer to a pointer that head points to
 * @str: pointer to a  string
 * Return: pointer to structure
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_string;
	unsigned int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	length = strlen(str);
	new_string = strdup(str);
	if (new_string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_string;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
