#include "stdio.h"
#include "stdlib.h"

int valide(char c, int base)
{
    char tab_1[] = "0123456789abcdef";
    char tab_2[] = "0123456789ABCDEF";
    while (base--)
    {
        printf("c = %c\n",c);
        if(tab_1[base] == c || tab_2[base] == c)
            return (1);
    }
    return (0);
}

int value_base(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}



int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while (str[i] && valide(str[i],str_base))
    {
        res = res * str_base + value_base(str[i]);
        i++;
    }
    return (res * sign);
}

// int main()
// {
//     printf("%d\n",ft_atoi_base("123", 10));
//     return (0);
// }