#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nb)
{
    char *buffer;
    long int len = strlen(nb);
    buffer = (char*)malloc((len+1) * sizeof(char));
    
}