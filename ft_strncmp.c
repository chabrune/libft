#include "libft.h"

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i;
    unsigned char *prem;
    unsigned char *snd;
    prem = (unsigned char*)first;
    snd = (unsigned char*)second;
    i = 0;
    while((prem[i] || snd[i]) && i < length)
    {
        if(prem[i] > snd[i])
            return(1);
        else if(prem[i] < snd[i])
            return(-1);
        i++;
    }
    return(0);
}