#include "libft.h"

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    size_t i;
    unsigned char *str;

    str = (unsigned char*)memoryBlock;
    i = 0;
    while(str[i] && i < size)
    {
        if(str[i] == (char)searchedChar)
            return((char*)&str[i]);
        i++;
    }
    return(NULL);
}

#include <stdio.h>

int main(void)
{
    char str[] = "hello";
    char *result;
    result = ft_memchr(str, 'l', 4);
    printf("%s", result);
    return(0);
}