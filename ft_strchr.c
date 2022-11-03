#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    char *str;
    int i;

    i = 0;
    str = (char *)s;
    while(*str != (char)c)
    {
        if(*str == '\0')
            return(NULL);
        str++;
    }
    return(str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "llllellll";
    char search = 'e';
    printf("%s", ft_strchr(str, search));
}