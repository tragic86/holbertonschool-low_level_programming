#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 
 *
 *
 * 
 *
 *
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
