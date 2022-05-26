#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t
 * linked list
 * @head: first node in the list
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int node_sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		node_sum += temp->n;
		temp = temp->next;
	}

	return (node_sum);
}
