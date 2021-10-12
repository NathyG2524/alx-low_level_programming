#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a listint_t
 *@head: the beginning of a list
 *Returns: null
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head == NULL)
	{
		return ;
	}
	while (*head)
	{
		temp = *head;
		*head = *head->next;
		free(*temp); 
	}
	*head = NULL;
}
