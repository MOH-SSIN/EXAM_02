#include "unistd.h"

void str_capitalizer(char *str)
{
    int i;
    i = 0;
    int new_word = 1;
    while (str[i])
    {
        if (str[i] && (str[i] == ' ' || str[i] == '\n'))
        {
            write(1,&str[i],1);
            new_word = 1;
        }
        else
        {
            if (new_word && (str[i] >='a' && str[i] <= 'z'))
                str[i] -= 32;
            else if (!new_word && (str[i] >='A' && str[i] <= 'Z'))
                str[i] += 32;
            write (1,&str[i],1) ;
            new_word = 0;
        }
        i++;
    }
}

int main(int argc ,char **argv)
{
    if (argc == 1)
        write(1,"\n",1);
    else
    {
        int i = 1;
        while (argv[i])
        {
            str_capitalizer(argv[i]);
            write(1,"\n",1);
            i++;
        }
    }
}