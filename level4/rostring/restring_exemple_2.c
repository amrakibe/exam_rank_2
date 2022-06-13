#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char **ft_split(char *str)
{
    int c = 0;
    int i = 0;
    char **tab = (char **)malloc(sizeof(char *) * ft_strlen(str) - 1);
    if (!tab)
        return (NULL);
    while (str[i])
    {
        int j = 0;
        char *buf = malloc(sizeof(char) * ft_strlen(str) - 1);
        if (!buf)
            return (NULL);

        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        {
            i++;
        }
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
        {
            buf[j] = str[i];
            i++;
            j++;
        }
        buf[j] = '\0';
        if (buf[0])
            tab[c++] = buf;
    }
    tab[c] = 0;
    return (tab);
}

int main(int ac, char **av)
{
    int i = 0;
    char **tab;
    if (ac > 1)
    {
        tab = ft_split(av[1]);
        while (tab[i])
        {
            ft_putstr(tab[i]);
            ft_putstr(" ");
            i++;
        }
        ft_putstr(tab[0]);
    }
    write(1, "\n", 1);
}