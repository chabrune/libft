#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *str;

    j = 0;
    i = 0;
    if (ft_strlen(s) < start)
        return(ft_calloc(1,1));
    if(len <= (ft_strlen(s + start)))
        str = (char *)malloc((len + 1) * sizeof(char));
    else if(len > (ft_strlen(s + start)))
        str = (char *)malloc((ft_strlen(s + start) + 1) * sizeof(char));    
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