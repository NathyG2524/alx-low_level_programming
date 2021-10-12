#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the veginniing of a listint_t list
 *
 *Return: the address of the new element, or null if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newnode;
	newnode = (struct listint_s*)malloc(sizeof(struct listint_s));
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	if (*head)
	{
		return *head;
	}
	else
		return NULL;
}
