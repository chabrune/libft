#include "libft.h"
/*tolower() converts the letter c to lower case, if possible.*/
int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return(c);
}