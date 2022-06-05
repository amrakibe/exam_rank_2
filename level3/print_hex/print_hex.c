#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i]  <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return(res * sign);
}

void ft_print_hex(int nb)
{
    if (nb > 16)
    {
        ft_print_hex(nb / 16);
        ft_print_hex(nb % 16);
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    else if (nb < 16)
        ft_putchar(nb + 87);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_print_hex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
}