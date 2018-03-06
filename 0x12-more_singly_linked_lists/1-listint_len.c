#include "lists.h"
/**
 * listint_len - return the number of elements in a list
 *
 *
 *
 * @h: node
 *
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{


	size_t node_counter = 0;



	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}






	return (node_counter);





}
