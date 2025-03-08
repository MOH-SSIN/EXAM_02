#include "unistd.h"


int is_in_str(char c, char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int alredy_vu(char c, char *argv_1, int i_len)
{
    int i;
    i = 0;
    while (i < i_len)// hna drt < omachi <= hite 5asni n9arane les ement li 9bale i_len ok
    {
        if (argv_1[i] == c)
            return (1);
        i++;
    }
    return (0);
}
#include "stdio.h"
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i;
        /*
        hna knchofe ila kane element arg[1][i] dans argv[2] et elemnt argv[1][i]
        n'est pas repeter apartie le debut de argv[1] jusqua emlapacement de element
        aegv[1][i] ila kan hde chi vrai kan aficher element;
        */
       i = 0;
       while (argv[1][i])
       {
            if (is_in_str(argv[1][i], argv[2]) && !alredy_vu(argv[1][i], argv[1], i))
                write(1,&argv[1][i],1);
            i++;
       }
    }
    write (1,"\n",1);
}