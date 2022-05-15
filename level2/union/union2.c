#include <unistd.h>
#include<stdio.h>

int chek_exist(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(c == str[i])
			return(1);
		i++;
	}
	return(0);
}

int chek_double(char *str, int size)
{
	int i = 0;
	while(i < size)
	{
		if(str[i] == str[size])
			return(1);
		i++;
	}
	return(0);
}
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 3)
	{
		while(av[1][i])
		{
			if(!chek_double(av[1], i))
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(!chek_double(av[2], i) && !chek_exist(av[2][i],av[1]))
			{
				write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}
