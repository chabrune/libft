#include "libft.h"
/*La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis s. 
La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit) donc être libérée avec free(3)*/
char *ft_strdup(const char *s)
{
    size_t i;
    char *str;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    str = (char*)malloc(sizeof(char) * (len + 1));
    if(!str)
        return(NULL);
    while(i < len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}