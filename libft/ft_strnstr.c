#include <unistd.h>
#include <stdio.h>

char *ft_strnstr(const char *str, const char *to_find, size_t len);

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t i = 0;
    size_t j;

    if (!str && !len)
        return 0;

    if (to_find[0] == '\0' || to_find == str)
        return (char *)str;

    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && i + j < len)
        {
            if (str[i + j] == '\0' && to_find[j] == '\0')
            {
                return (char *)&str[i];
            }
            j++;
        }
        if (to_find[j] == '\0')
        {
            return (char *)(str + i);
        }
        i++;
    }
    return NULL;
}

// int main()
// {
//     char str[] = "hello, world!";
//     char c[] = "world!";
//     char *res;

//     res = ft_strnstr(str, c, 14);
//     // printf("found: %s\n", ft_strnstr(str, c, 14) ? "YES" : "NO");
//     printf("found: %s\n", res);
// }