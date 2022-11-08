#include "libft.h"

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
        i++;
    return(i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *str;

    j = 0;
    i = 0;
    str = (char *)malloc(ft_strlen((char*)s) * sizeof(len + 1));
    if(!str)
        return(NULL);
    while(s[i])
    {
        if(i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = 0;
    return(str);
}

#include <stdio.h>
int main(void)
{
    char s[] = "je suis ton pere";
    printf("%s", ft_substr(s, 4, 10));


}