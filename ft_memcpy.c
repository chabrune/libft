#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char* desti;
    char* sourc;
    if(!dest && !src)
        return(NULL);
    i = 0;
    desti = (char*)dest;
    sourc = (char*)src;
    while(i < n)
    {
        desti[i] = sourc[i];
        i++;
    }
    return((void*)desti);
}