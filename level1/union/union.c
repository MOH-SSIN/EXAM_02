#include "stdio.h"
#include "unistd.h"

int doubler(char c, char *str, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        char *str_1 = argv[1];
        char *str_2 = argv[2];

        while (str_1[i])
        {
            if (!doubler(str_1[i], str_1, i))
                write(1, &str_1[i], 1);
            i++;
        }

        i = 0;
        while (str_2[i])
        {
            if (!doubler(str_2[i], str_2, i) && !doubler(str_2[i], str_1, ft_strlen(str_1)))
                write(1, &str_2[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
