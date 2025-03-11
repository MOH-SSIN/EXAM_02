#include "stdio.h"
#include "stdlib.h"

static int	count_size(long nbr)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		size = 1;
	}
	if (nbr == 0)
		size = 1;
	else
	{
		while (nbr)
		{
			nbr = nbr / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int	size;
	long	nbr;
	char	*str;
	int		negative;

	size = count_size((long) n);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	nbr = (long) n;
	negative = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
		negative = 1;
	}
	str[size] = '\0';
	while (size > negative)
	{
		str[size - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	return (str);
}