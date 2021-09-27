<<<<<<< HEAD
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
=======
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - ...
 * @d: ...
 *
 * Return: ...
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{ free(d->owner);
free(d->name);
free(d); }}
>>>>>>> 67070a8e803d7fcbe0ad374c7591ba1b79f3b9dc
