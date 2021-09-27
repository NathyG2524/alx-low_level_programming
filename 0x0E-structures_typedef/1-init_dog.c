<<<<<<< HEAD
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

		if (!d)
			return;
		d->name = name;
		d->age = age;
		d->owner = owner;
}
=======
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner; }}
>>>>>>> 67070a8e803d7fcbe0ad374c7591ba1b79f3b9dc
