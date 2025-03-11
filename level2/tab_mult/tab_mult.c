#include "unistd.h"

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

void ft_putnbr(int nbr)
{
    char c;
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else if (nbr >= 0 && nbr <= 9)
    {
        c = nbr + '0';
        write(1,&c,1);
    }
}
void tab_mult(int nbr)
{
    int i = 1;
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1," x ",3);
        ft_putnbr(nbr);
        write(1," = ",3);
        ft_putnbr(nbr * i);
        write(1,"\n",1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        if (nbr > 0)
            tab_mult(nbr);
    }
    else
        write(1,"\n",1);
}