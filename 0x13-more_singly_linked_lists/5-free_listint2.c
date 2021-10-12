#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a listint_t
 *@head: the beginning of a list
 *Returns: null
 */

void free_listint2(listint_t **head)
{
	if ((*head) == NULL)
	{
		return ;
	}
	while (*head)
	{
	free(*head);
	*head = 0;
	}
}
