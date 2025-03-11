#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"


void print_hex(int nbr)
{
    char tab[] = "0123456789abcdef";
    char c = '\0';
    if(nbr >= 16)
    {
        print_hex(nbr / 16);
        print_hex(nbr % 16);
    }
    else
    {
        c = tab[nbr % 16];
        write(1,&c,1);
    }
}
int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while (str[i] == ' ' || str[i] == '\n' || str[i] =='\t')
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        if(nbr >= 0)
            print_hex(nbr);
    }
    write(1,"\n",1);
}