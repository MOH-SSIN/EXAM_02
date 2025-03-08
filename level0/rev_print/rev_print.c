#include "unistd.h"

size_t ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
        char *str;
        str = argv[1];
        i = ft_strlen(str) - 1;
        while(str[i])
        {
            write(1,&str[i],1);
            i--;
        }
    }
    write(1,"\n",1);
}