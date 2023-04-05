#include "lists.h"
/**
 * sum_listint - sums data of nodes
 * @head: pointer to the first node
 * Return: int value of sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;
	if (ptr != NULL)
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	else
		return (0);
	return (sum);
}
