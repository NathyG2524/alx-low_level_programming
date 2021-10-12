#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - functionthat frees a listint_t list
 *Return: void
 */

void free_listint(listint_t *head)
{
	free(head);
}
