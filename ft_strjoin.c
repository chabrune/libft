#include "libft.h"
int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
        i++;
    return(i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;

    j = 0;
    i = 0;
    str = (char*)malloc((ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1) * sizeof(char));
    if(!str)
        return(NULL);
    while(s1[i])
    {
        str[j++] = s1[i];
        i++;
    }
    i = 0;
    while(s2[j])
    {
        str[j++] = s2[i];
        i++;
    }
    str[j] = 0;
    return(str);
}
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Elo";
    printf("%s", ft_strjoin(str1, str2));
}
