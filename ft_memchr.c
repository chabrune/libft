#include "libft.h"
/* La fonction memchr() examine les n premiers octets de la zone mémoire pointée par s à la recherche du caractère c. 
Le premier octet correspondant à c (interprété comme un unsigned char) arrête l'opération*/
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    str = (unsigned char*)s;
    i = 0;
    while(n--)
    {
        if(str[i] == (unsigned char)c)
            return(&str[i]);
        i++;
    }
    return(NULL);
}