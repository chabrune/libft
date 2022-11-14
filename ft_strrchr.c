#include "libft.h"
/* La fonction strrchr() renvoie un pointeur sur la dernière occurrence du caractère c dans la chaîne s. */
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