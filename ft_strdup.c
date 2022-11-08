#include "libft.h"
/*La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis s. 
La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit) donc être libérée avec free(3)*/
int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
        i++;
    return(i);
}

char *ft_strdup(const char *s)
{
    int i;
    char *str;

    i = 0;
    str = (char *)malloc(ft_strlen((char*)s) * sizeof(char));
    while(s[i])
    {
        str = (char*)s;
        i++;
    }
    return(str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "jesuistonpere";
    printf("%s", ft_strdup(str));
}