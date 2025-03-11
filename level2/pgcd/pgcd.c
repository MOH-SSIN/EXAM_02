#include "stdio.h"
#include "stdlib.h"// atoi

void ft_pgcd(int a, int b)
{
    int n = a;
    while (n > 0)
    {
        if (a % n == 0 && b % n == 0)
        {
            printf("%d",n);
            break;
        }
        n--;
    }
}

int main(int argc , char **argv)
{
    if (argc == 3)
        ft_pgcd(atoi(argv[1]), atoi(argv[2]));
    else
        printf("\n");
}


