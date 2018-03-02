#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - add new node to beginning of list
 *
 * @head: beginning of list
 *
 * @str: string
 *
 *
 * Return: address of new element or Null
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	int temp;
	list_t *new_node;



	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	temp = 0;

	while (new_node->str[temp] != 0)
	{

		++temp;
		new_node->len = temp;
		new_node->next = *head;

	}

		*head = new_node;

	return (new_node);
}
