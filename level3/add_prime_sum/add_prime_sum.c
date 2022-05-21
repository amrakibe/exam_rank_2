#include<unistd.h>
#include<stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] <= 32)
        i++;
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if(str[i] == '+')
    i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] -48;
        i++;
    }
    return(sign * res);
}

void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    ft_putchar(nb + 48);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_atoi("99"));
    printf("%d", atoi("99"));
}
