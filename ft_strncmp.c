#include "libft.h"

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i;

    i = 0;
    while((first[i] || second[i]) && i < length)
    {
        if(first[i] > second[i])
            return(1);
        else if(first[i] < second[i])
            return(-1);
        i++;
    }
    return(0);
}
#include <stdio.h>

int main(void)
{
    char *f = "Z";
    char *s = "BB";
    printf("%d", ft_strncmp(f, s, 5));
}