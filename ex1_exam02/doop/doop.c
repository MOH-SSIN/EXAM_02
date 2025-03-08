#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"


int main(int ac, char **av)
{
	if (ac == 4 && !av[2][1])
	{
		int result = 0;
		int nbr_1 = atoi(av[1]);
		int nbr_2 = atoi(av[3]);
		if (av[2][0] == '+')
			result = nbr_1 + nbr_2;
		else if (av[2][0] == '-')
			result = nbr_1 - nbr_2;
		else if (av[2][0] == '*')
			result = nbr_1 * nbr_2;
		else if (av[2][0] == '/')
			result = nbr_1 / nbr_2;
		else if (av[2][0] == '%')
			result = nbr_1 % nbr_2;
        else
        {
            write(1,"\n",1);
            return(0);
        }
        printf("%d\n",result);
	}
	else
		write(1,"\n",1);
}
