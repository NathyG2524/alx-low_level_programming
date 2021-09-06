#include "main.h"

/**
 *print_rev - prints string in reverese.
 *@s: value to be evaluated.
 *Return: not.
 */
void print_rev(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
