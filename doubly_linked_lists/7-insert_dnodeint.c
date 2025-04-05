#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list.
 * @idx: index where the new node should be added.
 * @n: value to insert in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (current->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
	}
	else
	{
		new_node->next = current->next;
		new_node->prev = current;
		current->next->prev = new_node;
		current->next = new_node;
	}

	return (new_node);
}
