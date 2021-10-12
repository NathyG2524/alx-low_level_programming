#include <stdio.h>
#include "lists.h"

/**
 *print_listint: prints all the element of a listint_t
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	while(h)
	{
		if ( h != NULL)
		{
			printf("%u\n", h->n);
		}
		else
			printf("error");
		h = h->next;
		count++;
	}
	return (count);
}
