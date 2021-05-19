#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	printf ("Cadena entrante: %s\n", s);
	printf ("Len cadena entrante: %lu\n", ft_strlen(s));
	if (!s || start > ft_strlen(s) || ft_strlen(s) == 0)
		return (0);
	dst = (char *) malloc(sizeof(char) * len + 1);
	printf ("Len dst: %lu\n", ft_strlen(dst));
	if (dst != 0)
	{
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			dst[i] = s[start];
			start++;
			i++;
		}
		dst[i] = '\0';
	}
	else
		return (0);
	free(dst);
	return (dst);
}
