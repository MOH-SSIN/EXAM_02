#include "unistd.h"

// int main(int argc , char **argv)
// {
// 	if (argc == 2)
// 	{
// 		int i;
// 		i = 0;
// 		char *str = argv[1];
// 		int start_word = 0;
// 		int k;
// 		while (str[i])
// 		{
// 			if (str[i] != ' ' && str[i] != '\t')
// 			{
// 				write(1,&str[i],1);
// 				start_word = 1;
// 			}
// 			else if (start_word && (str[i] != ' ' || str[i] != '\t'))
// 			{
// 				while (str[i] == ' ' || str[i] == '\t')
// 					i++;
// 				if(str[i])
// 				{
// 					k = 0;
// 					while(++k <= 3)
// 						write(1," ",1);
// 				}
// 				continue;
// 			}
// 			i++;
// 		}	
// 	}
//    write(1,"\n",1);
// }
int main(int argc , char **argv)
{
	if (argc == 2)
	{
		int i;
		i = 0;
		char *str = argv[1];
		int start_word = 0;
		int k;
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				write(1,&str[i],1);
				i++;
				start_word = 1;
			}
			while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;
			if(str[i] && start_word)
				write(1,"   ",3);
		}
			i++;
	}
	write(1,"\n",1)	;
}