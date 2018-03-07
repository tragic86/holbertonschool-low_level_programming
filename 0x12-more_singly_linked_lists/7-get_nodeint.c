#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 *
 *
 * @head: start of list
 *
 * @index: index of node
 *
 * Return: nth node at index
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
