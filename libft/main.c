#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrays[] = {0x00000102, 1, 2, 3};
    int x = 1;
    //ft_memset(arrays, 5, 5);
    //ft_memset(arrays, 0, 4);
    //printf("%d\n", arrays[1]);
    printf("%d", *((char *)&x + 0));
}