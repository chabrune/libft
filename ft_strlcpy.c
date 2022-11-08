#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if(!dst || !src)
        return(0);
    if(dstsize > 0)
    {
        while(--dstsize && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while(src[i])
        i++;
    return(i);
}

#include <stdio.h>

int main(void)
{
    char dst[] = "jesuistonpere";
    char src[] = "hellomotherfucker";

    printf("%zu", ft_strlcpy(dst, src, 5));
}