#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av) {
    int i, len = 0, lenindx = 0;
    char *result = NULL;

    if (ac == 0 || av == NULL) {
        return NULL;
    }

    for (i = 0; i < ac; i++) {
        len += strlen(av[i]);
    }

    result = (char *)malloc((len + ac + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    
    for (i = 0; i < ac; i++) {
        strcat(result, av[i]);
        lenindx += strlen(av[i]);
        result[lenindx++] = '\n';
    }

    result[lenindx] = '\0'; // Add null-terminating character

    return result;
}

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}