#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t *ft_strlcat(char *dest, const char *src, size_t n);

size_t *ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    size_t size_dest;
    size_t size_src;
    size_t j;

    size_dest = ft_strlen(dest);
    size_src = ft_strlen(src);
    j = size_dest;
    if (!dest && n == 0)
        return (size_src);
    if (size_dest >= n)
        return (size_src + n);
    while (src[i] && size_dest + 1 < n)
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = 0;
    return (size_src + size_dest);
}

// int main()
// {
//     int size = 16;
//     char buffer[] = "This is ";
//     char last[] = "a potentially long string";
//     size_t *r;

//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
    
//     return(0);
// }