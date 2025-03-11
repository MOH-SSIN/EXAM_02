#include "stdlib.h"
#include "stdio.h"

int		*ft_rrange(int start, int end)
{
    int i;
    int *res;
    int size;

    size = abs(end - start) + 1;
    i = 0;
    res = (int *)malloc(size * sizeof(int));
    if (!res)
        return (NULL);
    while (end != start)
    {
        res[i] = end;
        if (end < start)
            end += 1;
        else
            end -= 1;
        i++;
    }
    res[i] = end;
    return (res);
}

// int main()
// {
//     int start = -1;
//     int end = -1;
//     int size;
//     size = abs(end - start) + 1;
//     int *tab = ft_rrange(start, end);
//     int i = 0;
//     while (i < size)
//     {
//         printf("%d ",tab[i]);
//         i++;
//     }
//     return (0);
// }