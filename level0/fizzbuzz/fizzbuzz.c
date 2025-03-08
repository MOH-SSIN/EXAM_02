#include "unistd.h"


int main(void)
{
    int div;
    int rest;
    int i;
    div = 0;
    rest = 0;
    i = 0;
    while(++i <= 100)
    {
        if (i % 3 == 0)
            write(1,"fizz",4);
        else if (i % 5 == 0)
            write(1,"buzz",4);
        else if (i % 3 == 0)
            write(1,"fizzbuzz",8);
        else if (i > 10)
        {
            div = i / 10 + '0';
            rest = i % 10 + '0';
            write(1,&div,1);
            write(1,&rest,1);
        }
        else
        {
            rest = i + '0';
            write(1,&rest,1);
        }
        write (1,"\n",1);
    }

}