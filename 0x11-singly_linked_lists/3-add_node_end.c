#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - add new node to end of list
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
list_t *add_node_end(list_t **head, const char *str)
{
	int temp;
	list_t *new_node;
	list_t	*temp_node;

	temp = 0;

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
	while (new_node->str[temp] != '\0')
		++temp;

	new_node->len = temp;

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
	return (*head);
}
