#include "lists.h"

/**
 * pop_listint - delets head node of linked list
 * @head: pointer to the first elem of the list
 *
 * Return: 0 if empty or the data inside the deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
