#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s || start > ft_strlen(s) || ft_strlen(s) == 0)
		return (0);
	dst = (char *) malloc(sizeof(char) * len);
	if (!dst)
		return (0);
	while (s[start] != '\0' && i < len)
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
