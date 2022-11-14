#include "libft.h"
/* La fonction calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de size octets, et renvoie un pointeur vers la mémoire allouée. 
Cette zone est remplie avec des zéros. Si nmemb ou si size est nulle, calloc renvoie soit NULL ou un unique pointeur qui pourra être passé ultérieurement à free() avec succès. */
void *ft_calloc(size_t num, size_t size)
{
    void *p;
    p = malloc(num * size);
    if (!p)
        return(0);
    ft_bzero(p, size * num);
    return(p);
}