#include <unistd.h>


//alpha_mirror howa mit2ate dyale kola alphabitique b7ala chditi wa9ra 
// otnitiha kola alphabitque 4yji fo9 lakhore hadak howa mirror(lettre miroir)
void	alpha_mirror(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
