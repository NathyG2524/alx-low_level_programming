#include "lists.h"

/**
 *print_listint - returns the number of list
 *
 *Retrun: number of lists
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	while (h)
	{
		if ( h != NULL)
		{
			h = h -> next;
		}
		count++;
	}
	return count;
}
