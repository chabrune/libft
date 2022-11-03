#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <ctype.h>
# include <string.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);

#endif