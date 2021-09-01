#include <iostream>
/**
 *
 *This is a list of
 *fabionacci series up to 50
 *
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	j = 1;
	for (k = 0; k < 50; k++)
	{
		l = i + j;
		i = j;
		j = l;
		printf("%d", l);
		if (l == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
