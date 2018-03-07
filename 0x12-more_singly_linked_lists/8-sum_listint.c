#include "lists.h"
/**
 * sum_listint - return the sum of all the data
 *
 *
 * @head: start of linked list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{


	int sum = 0;
	listint_t *current = head;


	while (current != NULL)
	{

		sum += current->n;
		current = current->next;

	}

	return (sum);


}
