#include <stdio.h>
/**
 *
 *main - This is a list of
 *fabionacci series up to 50
 * return: nothing.
 */
int main(void)
{
        unsigned long i, j, k, l, sums;

        i = 0;
        j = 1;
        sums = 0;
        for (k = 0; k < 4000000; k++)
        {
                l = i + j;
                i = j;
                j = l;
                printf("%lu", sums);
                if (l % 2 == 0 && l < 4000000 )
                {
                    sums += l;
                 }
                 printf("%lu", sums);
		 putchar('\n');
        }
        return (0);
}
