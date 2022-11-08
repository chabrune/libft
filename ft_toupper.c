#include "libft.h"
/*toupper() converts the letter c to upper case, if possible.*/
int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return(c);
}