#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t nchar;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	        return (NULL);

	node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	node->len = nchar;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
        	*head = node;
	}
	else
	{
        	while (temp->next != NULL)
			temp = temp->next;
	        temp->next = node;
	}

	return (*head);
}
