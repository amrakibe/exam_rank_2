#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
    char *res;
    res = malloc(sizeof(char) * strlen(av[1]));
    if (!res)
        return (0);
    int j = 0;
    int i = 0;
    int len = 0;
    if (ac > 1)
    {
        while (av[1][j] == ' ' || av[1][j] == '\t')
            j++;
        len = j;
        while (av[1][j])
        {
            if (av[1][j] == ' ' || av[1][j] == '\t')
                break;
            res[i] = av[1][j];
            i++;
            j++;
        }
        len += i + 1;
        while (av[1][len])
        {
            if (av[1][len] == ' ')
            {
                write(1, " ", 1);
                while (av[1][len] == ' ')
                    len++;
            }
            write(1, &av[1][len], 1);
            len++;
        }
        len = 0;
        write(1, " ", 1);
        while (res[len])
        {
            write(1, &res[len], 1);
            len++;
        }
    }
    write(1, "\n", 1);
    return (0);
}