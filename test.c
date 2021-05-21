#include "libft.h"
#include <string.h>
#include <ctype.h>

int	main (void)
{
	//char	c = -4;
	for (int i = 0; i < 128; i++)
	{
		printf ("Resultado original (%d)(%c): %d\n", i, i, tolower(i));
		printf ("Resultado custom: %d\n\n", ft_tolower(i));
	}
}
