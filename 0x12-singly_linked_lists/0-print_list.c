#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_l
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
<<<<<<< HEAD
size_t s = 0;
while( h )
{
if(!h->str)
printf("[0] (nil)");
else
printf("[%U] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
=======
	size_t s = 0;

	while( h )
	{
		if(!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
>>>>>>> 74a680fc634e6cb8bf1853833cce4fa6acfd59ce
}
