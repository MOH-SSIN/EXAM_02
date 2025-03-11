#include<unistd.h>
int main(int argc, char **argv)
{
	if(argc>1)
	{
		int i=0;
		while(argv[1][i] == ' '  || argv[1][i] =='\t')
			i++;
		int j=i;
		while(argv[1][i])
		{
			while(argv[1][i] != ' ' && argv[1][i]!= '\t')
			       i++;
			if(argv[1][i] &&(argv[1][i]!= ' ' && argv[1][i] != '\t' ) && argv[1][i] ==' ' || argv[1][i] =='\t')
			{
				while(argv[1][i] != '\t' && argv[1][i] != ' ')
				{
					write(1,&argv[1][i],1);
					i++;
				}
				write(1," ",1);
				i++;
			}
		}
	while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
	{
		write(1,&argv[1][j],1);
		j++;
	}

		
	}
	write(1,"\n",1);
	return 0;
}