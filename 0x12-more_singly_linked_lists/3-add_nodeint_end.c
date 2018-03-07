#include "lists.h"
/**
 * add_nodeint_end - add new node at end of list
 *
 *
 * @head: start of list
 *
 * @n: node
 *
 * Return: address of new element or Null if failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;


	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp_node = *head;

		while (temp_node->next != NULL)

			temp_node = temp_node->next;
			new_node->next = NULL;
			temp_node->next = new_node;

	}
	return (new_node);
}
