#include "stdio.h"
#include "stdlib.h"

int ft_strlen(char *str)
{
    int i =0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *tmp;
    int     i;
    tmp = (char *)malloc(ft_strlen(src) + 1);// + 1 pour '\0'
    if (!tmp)
        return (NULL);
    i = 0;
    while (src[i])
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}