#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*dst;

	dst = (char *)b;
	while (--len > 0)
		dst[len - 1] = c;
	return (b);
}
