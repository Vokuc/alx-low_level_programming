#include "lists.h"
/**
 * add_node - adds a new node at the end of a list
 * @head: head of the likked list
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t nchar;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);

	for (nchar  = 0; str[nchar]; nchar++)
	{
		;
	}

	node->len = nchar;
	node->next = *head;
	*head = node;

	return (*head);
}
