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
            if (str[i] >= 'a' && str[i] <= 'y')
                str[i] += 1;
            else if (str[i] >= 'A' && str[i] <= 'Y')
                str[i] += 1;
            else if (str[i] == 'z' || str[i] == 'Z')
            {
                if (str[i] == 'z')
                    str[i] = 'a';
                else if (str[i] == 'Z')
                    str[i] = 'A';
            }
            write (1,&str[i],1);
        }
    }
    write (1,"\n",1);
}