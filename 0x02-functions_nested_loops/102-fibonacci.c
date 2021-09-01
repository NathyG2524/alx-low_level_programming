#include <stdio.h>
/**
 *main - This is a list of
 *fabionacci series up to 50
 *Return: Nothing.
 */
int main(void)
{
	unsigned long i, j, k, l;

	i = 0;
	j = 1;
	for (k = 0; k < 50; k++)
	{
		l = i + j;
		i = j;
		j = l;
		printf("%lu", l);
		if (l == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
