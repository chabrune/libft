#include "libft.h"
/* La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2.
 Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est respectivement inférieure, égale ou supérieur à s2.*/
int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
    unsigned char *st;
    unsigned char *snd;
    st = (unsigned char*)pointer1;
    snd = (unsigned char*)pointer2;
    int i;

    i = 0;
    while((st[i] || snd[i]) && size > i)
    {
        if(st[i] > snd[i])
            return(1);
        else if(st[i] < snd[i])
            return(-1);
        return(0);
    }
}
#include <stdio.h>

int main(void)
{
    char st[] = "hola";
    char snd[] = "hola";
    printf("%d", ft_memcmp(st, snd, 4));
}