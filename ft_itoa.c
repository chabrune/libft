#include "libft.h"

int ft_len(long nb)
{
    int len;

    len = 0;
    if(nb < 0)
    {
        nb = nb * -1;
        len++;
    }
    while(nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return(len);
}

char *ft_itoa(int nb)
{
    char *str;
    long lnb;
    int i;

    lnb = nb;
    i = ft_len(lnb);
    if(!(str = (char*)malloc(sizeof(char) * (i + 1))))
        return(NULL);
    str[i--] = '\0';
    if(lnb == 0)
    {
        str[0] = 48;
        return(str);
    }
    if(lnb < 0)
    {
        str[0] = '-';
        lnb = lnb * - 1;
    }
    while(lnb > 0)
    {
        str[i] = 48 + (lnb % 10);
        lnb = lnb / 10;
        i--;
    }
    return(str);
}