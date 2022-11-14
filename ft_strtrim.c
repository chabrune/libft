/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:49:48 by chabrune          #+#    #+#             */
/*   Updated: 2022/11/14 18:49:58 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *str)
// {
//     int i;
//     i = 0;

//     while(str[i])
//         i++;
//     return(i);
// }

// char	*ft_strchr(const char *s, int c)
// {
//     char *str;

//     str = (char*)s;
//     while(*str != (char)c)
//     {
//         if(*str == '\0')
//             return(NULL);
//         str++;
//     }
//     return(str);
// }
// size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
//     size_t i;

//     i = 0;
//     if(dstsize > 0)
//     {
//         while(--dstsize && src[i])
//         {
//             dst[i] = src[i];
//             i++;
//         }
//         dst[i] = '\0';
//     }
//     while(src[i])
//         i++;
//     return(i);
// }
// char *ft_strdup(const char *s)
// {
//     int i;
//     char *str;
//     int len;

//     i = 0;
//     len = ft_strlen((char*)s);
//     str = (char*)malloc(sizeof(char) * (len + 1));
//     if(!str)
//         return(NULL);
//     while(i < len)
//     {
//         str[i] = s[i];
//         i++;
//     }
//     str[i] = '\0';
//     return(str);
// }
int	ft_start(const char *s1, const char *set)
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

int	ft_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen((char *)s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "hello";
//     char set[] = "o";
//     printf("%s", ft_strtrim(str, set));
//     return(0);

// }
