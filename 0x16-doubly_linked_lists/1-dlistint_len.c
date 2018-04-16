#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - a function that returns the number of elements
 *
 * @h: head
 *
 *
 * Return: number of elements
 *
 *
 *
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t node_counter = 0;


	while (h != NULL)
	{

		h = h->next;
		node_counter++;

	}

	return (node_counter);

}
