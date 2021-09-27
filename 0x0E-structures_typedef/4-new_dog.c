<<<<<<< HEAD
#include "dog.h"
/**
 * _strdup - returns a pointer to space in memory containing copy of string.
 * @s: pointer to the string.
 * Return: Pointer to a string stored in memory.
 */
char *_strdup(char *s)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);
/*Get the length of the string.*/
	while (s[i] != '\0')
		i += 1;
/*+1 to include the terminating character in size.*/
	i++;

	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}




/**
 *new_dog - create an instance of struct dog.
 *@name:firt argument.
 *@age:second argument.
 *@owner: Third argument.
 *Return: instance of struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);
/*Assign name element of new struct to the copy of name.*/
	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
/*Assgin owner element of new struct to the copy of ownwer.*/
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
=======
#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{ dog_t *cutie_dog;
int name_l = 0, own_l = 0;
if (name != NULL && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
cutie_dog = malloc(sizeof(dog_t));
if (cutie_dog == NULL)
return (NULL);
cutie_dog->name = malloc(sizeof(char) * name_l);
if (cutie_dog->name == NULL)
{
free(cutie_dog);
return (NULL); }
cutie_dog->owner = malloc(sizeof(char) * own_l);
if (cutie_dog->owner == NULL)
{
free(cutie_dog->name);
free(cutie_dog);
return (NULL); }
cutie_dog->name = _strcpy(cutie_dog->name, name);
cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
cutie_dog->age = age; }
return (cutie_dog); }
/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{ int c = 0;
for (; *s != '\0'; s++)
{ c++; }
return (c); }
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{ int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i]; }
dest[i++] = '\0';
return (dest); }
>>>>>>> 67070a8e803d7fcbe0ad374c7591ba1b79f3b9dc
