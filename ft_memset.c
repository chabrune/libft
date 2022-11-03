#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *string;

    string = (char *)s;
    i = 0;
    while(i < n)
    {
        string[i] = c;
        i++;
    }
    return s;
}