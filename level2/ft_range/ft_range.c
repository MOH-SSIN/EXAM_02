#include "stdlib.h"
#include "stdio.h"

int *ft_range(int start, int end)
{
    int i;
    int *res;
    int size;

    size = abs(end - start) + 1;
    res = (int *)malloc(size * sizeof(int));
    if (!res)
        return (NULL);
    if (start < end)
    {
        while (start <= end)
        {
            res[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while (end <= start)
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return (res);
}

// int main()
// {
//     int start = 0;
//     int end = -3;
//     int size;
//     size = abs(end - start) + 1;
//     int *tab = ft_range(start, end);
//     int i = 0;
//     while (i < size)
//     {
//         printf("%d ",tab[i]);
//         i++;
//     }
//     return (0);
// }