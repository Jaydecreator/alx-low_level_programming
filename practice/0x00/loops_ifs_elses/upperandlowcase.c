#include <stdio.h>

int main(void)
{
        char alph;

        for (alph = 'a' && 'A'; alph <= 'z' && 'Z'; alph++)

                putchar(alph);

        putchar('\n');

        return 0;
}
