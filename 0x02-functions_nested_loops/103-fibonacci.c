#include <stdio.h>
/**
 *main- This is a list of
 *fabionacci series up to 50
 *Return: nothing.
 */
int main(void)
{
	unsigned long i, j, k, l, sums;

	i = 0;
        j = 1;
        sums = 0;
        for (k = 0; k < 50; k++)
        {
                l = i + j;
                i = j;
                j = l;
                if (l % 2 == 0 && l < 4000000 )
                {
                    sums += l;
                 }
        }
        printf("%lu", sums);
        putchar('\n');
        return (0);
}
