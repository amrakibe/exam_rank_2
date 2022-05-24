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
        res = res * 10 + str[i] - 48;
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

int ft_is_prime(int nbr)
{
    int i = 2;
    while(i < nbr)
    {
        if(nbr % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int		ft_add_prime_sum(int nb)
{
	int i;
	int prime_sum;

	i = 2;
	prime_sum = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (ft_is_prime(i))
			prime_sum += i;
		i++;
	}
	return (prime_sum);
}

int main(int ac , char **av)
{
    if(ac == 2)
    {
        ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));
    }
    else
    write(1, "0", 1);
    write(1, "\n", 1);
}