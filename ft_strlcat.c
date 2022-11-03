#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dstlen;
	size_t		srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size - 1 <= dstlen)
		return (srclen + size);
	while (dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

#include <stdio.h>

int main(void)
{
    char dst[] = "jesuistonpere";
    char src[] = "hellomotherfucker";

    printf("%zu", ft_strlcat(dst, src, 5));
}