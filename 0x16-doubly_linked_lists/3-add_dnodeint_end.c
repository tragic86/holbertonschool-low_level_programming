#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end list
 * @head: start of list
 * @n: data
 * Return: address of new elememt
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}


	new_node->prev = temp;
	new_node->next = NULL;
	temp->next = new_node;
	}
	return (new_node);
}
