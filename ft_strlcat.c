#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	r;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	while (src[i] && (k + i + 1) < dstsize)
	{
		if (k + i + 1 < dstsize)
			dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = 0;
	if (dstsize < k)
		r = j + dstsize;
	else
		r = j + k;
	return (r);
}
