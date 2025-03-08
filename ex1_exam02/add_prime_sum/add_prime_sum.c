#include "unistd.h"
#include "stdlib.h"

int ft_atoi(char *str)
{
    int result;
    int i;
    int sign;
    result = 0;
    sign = 1;
    i =0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
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
        result = result *10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int is_prime(int nbr)
{
    int i = 2;
    if (nbr == 1)
        return (0);
    while (i <= nbr / 2)
    {
        if (nbr % i == 0)
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
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        c = '0' + nbr;
        write(1,&c,1);
    }
}


int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        int som =0;
        if (nbr <= 0)
        {
            write(1,"0\n",2);
            exit(1);
        }
        i = 1;
        while (i <= nbr)
        {
            if (is_prime(i))
                som += i;
            i++;
        }
        ft_putnbr(som);
    }
    else
        ft_putnbr(0);
    write (1,"\n",1);
    return (0);
}