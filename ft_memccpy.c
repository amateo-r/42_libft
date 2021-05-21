#include "libft.h"

void	*ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	k;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	k = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == k)
			return (d + i + 1);
	}
	return (0);
}
