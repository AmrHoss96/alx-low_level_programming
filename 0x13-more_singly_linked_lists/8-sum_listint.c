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
	if (ptr == NULL)
		return (0);
	else
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
