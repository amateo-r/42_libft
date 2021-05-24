#include "libft.h"
#include <string.h>
#include <ctype.h>

int	main (void)
{
	char	s1[4];
	int		c = 0;
	char	s3[4];

	printf ("Resultado original: %s\n", strchr(s1, c));
	printf ("Resultado CUSTOMIN: %s\n", ft_strchr (s3, c));
}
