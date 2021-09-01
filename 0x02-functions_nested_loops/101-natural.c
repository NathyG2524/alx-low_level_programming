#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a,b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
