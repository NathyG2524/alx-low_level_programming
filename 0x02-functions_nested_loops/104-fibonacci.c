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
        for (k = 0; k < 98; k++)
        {
                l = i + j;
                i = j;
                j = l;
                printf("%lu", l);
                if (k == 97)
                        putchar('\n');
                else
                {
                        printf(", ");
                }
        }
        return (0);
}#include <stdio.h>
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
        for (k = 0; k < 98; k++)
        {
                l = i + j;
                i = j;
                j = l;
                printf("%lu", l);
                if (k == 97)
                        putchar('\n');
                else
                {
                        printf(", ");
                }
        }
        return (0);
}
