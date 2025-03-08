#include "unistd.h"
#include "stdlib.h"

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-')
    {
        sign *=  -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int is_prime(int nbr)
{
    int i = 2;
    while (i <= nbr /2)
    {
        if (i % 2 == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putnbr(int nbr)
{
    char c;
    if (nbr >= 10)
    {
        ft_putnbr( nbr / 10);
        ft_putnbr( nbr % 10); 
    }
    c = nbr + '0';
    write(1,&c,1);
}


int main(int argc, char **argv)
{
    int nbr;
    if (argc == 2)
    {
        int som = 0;
        int i = 2;
        nbr = ft_atoi(argv[1]);
        while (i <= nbr)
        {
            if (is_prime(nbr))
                som += i;
            i++;
        }
        ft_putnbr(nbr);
    }
    else
        write(1,"0",1);
    write(1,"\n",1);
    return (0);
}