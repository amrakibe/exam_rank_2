#include <unistd.h>

int main(int ac , char **av)
{
	int i = 0;
	int j = 1;
	
    if (ac == 1)
		write(1, "\n", 1);
	while(j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			char c = av[j][i];
			if(av[j][i + 1] == ' ' || av[j][i + 1] == '\0' || av[j][i + 1] == '\t')
			{
           		if(c >= 'a' && c <= 'z')
				   c -= 32;
			}
			else
			{
				if(c >= 'A' && c <= 'Z')
					c += 32;
			}
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
