#include "main.h"

/**
 * main - check the code
 *
 *swap_int - switches value of first input with the value of the second input.
 *
 * @a: First value to swap.
 *
 * @b: Second value to swap.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

