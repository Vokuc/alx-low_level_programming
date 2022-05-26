#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked
 * list
 * @head: points to the first node in the list
 * @n: data to insert in that newly created node
 * Return: NULL or pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
