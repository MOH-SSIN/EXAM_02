#include "stdio.h"
/*
des info : 
octet >> 4 : 01000001 devient 00000100
Les 4 bits de gauche sont effacés, et on remplit à gauche avec des 0.

octet << 4 : 01000001 devient 00010000
Les 4 bits de droite sont effacés, et on ajoute des 0 à droite.

des info suplemntaire : li b4ite nwslw howa fach kndire nombre << i
rah kn9sade 4adi ndecaler les i bite dyale nombre li kinine 3la f droit vers la gauche ok 

*/
unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4 | octet << 4);
}

int main()
{
    printf ("%u\n",swap_bits(8));
}