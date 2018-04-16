#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: start of list
 * @index: index
 *
 * Return: 1 if success -1 otherwise
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t  *pointer;
	unsigned int count;

	if (*head == NULL || head == NULL)
		return (-1);

	count = 0;

	while (pointer != NULL)
	{
		if (count == index)
			break;
		pointer = pointer->next;
		count++;
	}

	if (index > count)
		return (-1);


	if (pointer->next == NULL)
	{
		pointer->prev = NULL;
		free(pointer);
		return (1);
	}
	else
	{
		pointer->prev->next = pointer->next;
		pointer->next->prev = pointer->prev;
		free(pointer);
		return (1);
	}

	return (-1);
}
