#include "libft.h"

void	*ft_memchr (const void *s, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	k;
	size_t			i;

	d = (unsigned char *)s;
	k = (unsigned char)c;
	i = -1;
	while (++i < n)
		if (k == d[i])
			return (d + i);
	return (0);
}
