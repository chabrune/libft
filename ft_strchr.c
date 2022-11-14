#include "libft.h"
/*La fonction strchr() renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s. */
char	*ft_strchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while(*str != (char)c)
    {
        if(*str == '\0')
            return(NULL);
        str++;
    }
    return(str);
}