#include "stdio.h"
#include "string.h"

/*
Elle compte le nombre de caractères consécutifs au début 
d'une chaîne s qui appartiennent à un ensemble donné de caractères accept.
*/
size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	size_t count;
	int exist;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		exist = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				exist = 1;
				break ;
			}
			j++;
		}
		if (!exist)
			break ;
		count++;
		i++;
	}
	return (count);
}

