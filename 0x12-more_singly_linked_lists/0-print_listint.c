#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - a function that prints all the elements of a list
 *
 *
 *
 *
 * @h: node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t node_counter = 0;



	while (h != NULL)
	{
		printf("%d\n", h->n);





		h = h->next;
		node_counter++;
	}


	return (node_counter);
}
