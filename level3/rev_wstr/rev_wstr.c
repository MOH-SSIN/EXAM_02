#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i=0;
	while(str[i])
		i++;
	return i;
}
void rev_wstr(char *str)
{
		int len= ft_strlen(str);
		int end= len;
		int start=0;
		while(len>0)
		{
			while(len>0 && str[len-1]!= ' '&& str[len-1]!= '\t')
    			len--;
			start =len;
			while(start<end)
			{
				write(1,&str[start],1);
				start++;
			}
			if(len>0)
					write(1," ",1);
			end = len -1;
			len = end;
		}
}
int main(int argc, char **argv)
{
	if(argc ==2)
	{
		rev_wstr(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}

