#include "stdio.h"

//Le PPCM (plus petit multiple commun)
unsigned int	lcm(unsigned int a, unsigned int b)
{
    if (!a || !b)
        return (0);
    unsigned int n;
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if ((n % a == 0) && (n % b == 0))
            return (n);
        n++;
    } 
}
// int main()
// {
//     printf("PPCM de 15 et 20 : %u\n", lcm(15, 20)); // Resultat : 60
//     printf("PPCM de 0 et 20 : %u\n", lcm(0, 20));   // Resultat : 0
//     printf("PPCM de 7 et 5 : %u\n", lcm(7, 5));     // Resultat : 35
//     return (0);
// }
