#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h> 

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *first, const char *second, size_t length);

#endif