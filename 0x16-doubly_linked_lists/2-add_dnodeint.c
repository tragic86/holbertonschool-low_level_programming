#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of list
 * @head: start of list
 *
 * @n: data
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{


	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);


	new_node->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}


	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);


}
