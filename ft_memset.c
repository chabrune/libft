#include "libft.h"
/*La fonction memset() remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c*/
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