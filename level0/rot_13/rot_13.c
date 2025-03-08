#include "unistd.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
        char *str;

        i = -1;
        str = argv[1];
        while (str[++i])
        {
            if (str[i] >= 'a' && str[i] <= 'm')
                str[i] += 13; 
            else if (str[i] >= 'n' && str[i] <= 'z')
                str[i] -= 13; 
            else if (str[i] >= 'A' && str[i] <= 'M')
                str[i] += 13; 
            else if (str[i] >= 'N' && str[i] <= 'Z')
                str[i] -= 13; 
            write (1,&str[i],1);
        }
    }
    write (1,"\n",1);
}