#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - a function that returns number of elements
 *
 *
 * @h: pointer
 *
 *
 * Return: number of nodes
 *
 *
 */

size_t list_len(const list_t *h)
{

	size_t node_counter = 0;


	while (h != NULL)
	{

		h = h->next;
		node_counter++;

	}


	return (node_counter);




}
