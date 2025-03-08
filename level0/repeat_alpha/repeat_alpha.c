#include "unistd.h"
#include "stdio.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
        int k;
        i = 0;
        while (argv[1][i])
        {
            k = 1;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                k = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                k = argv[1][i] - 64;
            while (k != 0)
            {
                write(1,&argv[1][i],1);
                k--;
            }
            i++;
        }
    }
    write(1,"\n",1);
}