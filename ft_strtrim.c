#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while(*str != (char)c)
    {
        if(*str == '\0')
            return(NULL);
        str++;
    }
    return(str);
}
int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
        i++;
    return(i);
}
char *ft_strdup(const char *s)
{
    int i;
    char *str;

    i = 0;
    str = (char *)malloc(ft_strlen((char*)s) * sizeof(char));
    while(s[i])
    {
        str = (char*)s;
        i++;
    }
    return(str);
}
int			ft_getstart(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;

    i = 0;
    if(!dst || !src)
        return(0);
    if(dstsize > 0)
    {
        while(--dstsize && src[i])
        {
            dst[i] = src [i];
            i++;
        }
        dst[i] = '\0';
    }
    while(src[i])
        i++;
    return(i);
}

int			ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen((char*)s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}

#include <stdio.h>
int main(void)
{
    char str[] = "je suis ton peret";
    char set[] = "t";
    printf("%s", ft_strtrim(str, set));
}