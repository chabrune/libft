#include "libft.h"
/* La fonction calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de size octets, et renvoie un pointeur vers la mémoire allouée. 
Cette zone est remplie avec des zéros. Si nmemb ou si size est nulle, calloc renvoie soit NULL ou un unique pointeur qui pourra être passé ultérieurement à free() avec succès. */
void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;

    char *str;
    str = (char *)s;
    while(i < n)
    {
        str[n] = 0;
        i++;
    }
}

void *ft_calloc(size_t num, size_t size)
{
    void *p;
    p = malloc(num * size);
    ft_bzero(p, size * num);
    return(p);
}

#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    i = 0;
    p = (int *)ft_calloc(10, sizeof(int));
    while(i < 10)
    {
        printf("%d ", p[i]);
        i++;
    }
}