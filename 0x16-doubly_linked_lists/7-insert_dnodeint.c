#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i;


	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	if (idx == 0)
	{
		add_dnodeint(h,n);

	}

	i = 0;
	while(i < idx && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (idx != i)
		return (NULL);

	if (current == NULL)
	{
		add_dnodeint_end(h, n);
	}

	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;
	current->prev = new_node;


	return (new_node);




}
