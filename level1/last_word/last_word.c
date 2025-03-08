#include "unistd.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str;
        int i;
        i = 0;
        str = argv[1];
        while (str[i])
            i++;
        i--;
        while (i != 0 && (str[i] == ' ' || str[i] == '\t'))
            i--;
        while (i != 0 && (str[i] != ' ' && str[i] != '\t'))
            i--;
        if (str[i] == ' ' || str[i] == '\t')// pour cette cas "  lorem,ipsum  "
            i++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t'))
        {
            write(1,&str[i],1);
            i++;
        }
    }
    write(1,"\n",1);
}