#include "libft.h"
/* La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2.
 Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est respectivement inférieure, égale ou supérieur à s2.*/
int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
    unsigned char *st;
    unsigned char *snd;
    st = (unsigned char*)pointer1;
    snd = (unsigned char*)pointer2;

    if(st == snd || size == 0)
        return(0);
    while(size--)
    {
        if(*st != *snd)
            return(*st - *snd);
        else
        {
            st++;
            snd++;
        }
    }
    return(0);
}