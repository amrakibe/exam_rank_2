#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *s1;
    int i = 0;
    int j = 0;

    s1 = malloc(sizeof(char) * strlen(argv[1]));
    if (argc == 2)
    {
        while (argv[1][i] == ' ')
        {
            s1[j] = argv[1][i];
            i++;
            j++;
        }
        s1[j] = '\0';
            write(1, &s1[j], 1);
        j = 0; 
        
        while (argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, " ", 1);
        while (s1[j])
        {
            write(1, &s1[j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}