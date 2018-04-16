#include "lists.h"
/**
 * get_dnodeint_at_index - find nth node
 * @head: pointer
 * @index: index
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (i > index)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
		{

			return (head);

		}
		head = head->next;
		i++;
	}


	return (NULL);

}
