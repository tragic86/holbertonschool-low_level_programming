#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - a function that prints all elements of a list
 *
 *
 * @h: pointer
 *
 *
 * Return: number of nodes
 *
 *
 */

size_t print_list(const list_t *h)
{

	size_t node_count = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}
		h = h->next;
		node_count++;
	}



	return (node_count);

}
