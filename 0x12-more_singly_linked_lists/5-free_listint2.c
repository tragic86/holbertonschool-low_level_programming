#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - free a linked list
 *
 *
 * @head: start of list
 *
 * Return: none
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head == NULL)
		return;


	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;



}
