#include "main.h"

/**
 *_strlen - is used to determine the length of a string.
 * Return : not.
 */
int _strlen(char *s)
{
	int c = 0;


	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
