#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    while(i >= 0)
    {
        if(s[i] == (char)c)
            return((char*)&s[i]);
        i--;
    }
    return(NULL);

}

#include <stdio.h>

int main(void)
{
    char str[] = "jesuius";
    char search = 'u';

    printf("%s", ft_strrchr(str, search));
}