#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free a linked list
 *
 *
 * @head: start of link list
 *
 * Return: none
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->next);
		free(temp);


	}




}
