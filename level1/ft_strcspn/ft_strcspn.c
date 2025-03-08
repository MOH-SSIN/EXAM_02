#include "stdio.h"
#include "string.h"

/*
Son rôle : elle calcule la longueur du segment initial d'une chaîne s qui ne 
contient aucun des caractères présents dans une autre chaîne reject.
*/
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;
    int count;
    i = 0;
    count = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int	main(void)
{
	printf("%lu\n", ft_strcspn("tfesf", "es"));
	printf("%lu\n", strcspn("tfestf", "es"));
    printf("%lu\n", ft_strcspn("test", "f"));
	printf("%lu\n", strcspn("test", "f"));
}