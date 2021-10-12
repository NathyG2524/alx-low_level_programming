#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t
 *
 *Retrun: the address of the new element, ot NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *newnode , *temp;
	newnode = (struct listint_s*)malloc(sizeof(struct listint_s));
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
		return newnode;
	}
	
	while(temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	if (*head)
		return *head;
	else
		return NULL;
}
