#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("\n");
        return 0;
    }

    int n = atoi(argv[1]);
    if (n == 1)
    {
        printf("1\n");
        return 0;
    }

    int factor = 2;
    int first = 1;

    while (n > 1)
    {
        if (n % factor == 0)
        {
            if (!first)
                printf("*");
            printf("%d", factor);
            n /= factor;
            first = 0;
        }
        else
            factor++;
    }
    printf("\n");
    return 0;
}
