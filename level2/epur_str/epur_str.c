#include "unistd.h"


int main(int argc , char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char *str = argv[1];
        int start_word = 0;
        while (str[i])
        {
            if (str[i] != ' ' && str[i] != '\t')
            {
                write(1,&str[i],1);
                start_word = 1;
            }
            else if(start_word && (str[i] ==' ' || str[i] == '\t'))
            {
                while(str[i] == ' ' || str[i] =='\t')
                    i++;
                if (str[i])
                    write(1," ",1);
                continue;// evite d'incrémenter i deux fois
            }
            i++;
        }
    }
    write(1,"\n",1);
}