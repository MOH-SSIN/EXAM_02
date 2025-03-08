#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"


int main(int argc, char **argv)
{
    int nbr_1, nbr_2, result;
    nbr_1 = 0;
    nbr_2 = 0;
    result = 0;
    if (argc == 4)
    {
        nbr_1 = atoi(argv[1]);
        nbr_2 = atoi(argv[3]);
        if (argv[2][0] == '+' && !argv[2][1])
            result = nbr_1 + nbr_2;
        else if (argv[2][0] == '-' && !argv[2][1])
            result = nbr_1 - nbr_2;
        else if (argv[2][0] == '*' && !argv[2][1])
            result = nbr_1 * nbr_2;
        else if (argv[2][0] == '/' && !argv[2][1])
            result = nbr_1 / nbr_2;
        else if (argv[2][0] == '%' && !argv[2][1])
            result = nbr_1 % nbr_2;
        else
            return (write(1,"\n",1));
        printf("%d\n",result);
    }
    else
    write (1,"\n",1);
}