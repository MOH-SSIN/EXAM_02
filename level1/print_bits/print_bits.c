#include "stdio.h"
#include "unistd.h"
//<< utliser pour décaler les bits d’un nombre vers la gauche.
//nombre << i  =>  nombre * (2^i)
//1 << 0 → les bits de 1 restent les mêmes → 1 (binaire : 00000001).
void	print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1,"1",1);
        else
            write (1,"0",1);
        i--;
    }
}

// int main()
// {
//     print_bits(254);
// }