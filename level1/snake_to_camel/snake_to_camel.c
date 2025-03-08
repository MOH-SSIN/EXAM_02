#include "unistd.h"


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
        char *str;
        int cap;
        i = 0;
        str = argv[1];
        cap = 0;
        while (str[i])
        {
            if (str[i] == '_')
                cap = 1;
            else
            {
                if (cap && (str[i] >= 'a' && str[i] <= 'z'))
                {
                    str[i] -= 32;
                    write(1,&str[i],1);
                }
                else
                    write(1,&str[i],1);
                cap = 0;
            }
            i++;
        }
    }
    write (1,"\n",1);
}