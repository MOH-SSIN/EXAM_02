#include "unistd.h"


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char *str_1 = argv[1]; 
        char *str_2 = argv[2];
        int i = 0;
        int j = 0;
        while (str_2[i])
        {
            if (str_2[i] == str_1[j])
                j++;
            i++;
        }
        if (!str_1[j])
            write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
}
