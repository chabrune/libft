#include "libft.h"
//La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets du bloc pointé par s
void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    char *str;

    str = (char *)s;
    while(i < n)
    {
        str[i] = 0;
        i++;
    }
}