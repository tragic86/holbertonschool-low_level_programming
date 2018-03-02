#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - free a linked list
 *
 *
 * @head: link list
 *
 * Return: none
 *
 */
void free_list(list_t *head)
{
	void *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);


	}




}
