#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_dlistint - return number of elements in a linked list
 *
 * @h: pointer to node
 *
 * Return: number of elements
 *
 */

size_t print_dlistint(const dlistint_t *h)
{

	int node_counter = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		node_counter++;
		temp = temp->next;
	}
	return (node_counter);
}
