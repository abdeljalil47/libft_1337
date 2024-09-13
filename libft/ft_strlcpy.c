#include <unistd.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size);

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i = 0;

    if (size == 0)
        return 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return ft_strlen(src);
}