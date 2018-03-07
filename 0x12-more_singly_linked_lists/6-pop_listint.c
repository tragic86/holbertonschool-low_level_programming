#include "lists.h"
/**
 * pop_listint - delete the head node
 *
 * @head: start of list
 *
 *
 *
 * Return: head node data
 *
 *
 */
int pop_listint(listint_t **head)
{

	int i;
	listint_t *temp;

	i = 0;

	if (head == NULL)
		return (0);

	else

		temp = (*head)->next;
	i = (*head)->n;
	free(*head);

	*head = temp;


	return (i);

}
