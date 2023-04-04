#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - adds node to a linked list
 * @head: pointer to a pointer of the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
        listint_t *current, *ptr;

        current = head;
        while (current != NULL)
        {
                ptr = current->next;
                free(current);
                current = ptr;
        }
}