#include "libft.h"
#include <string.h>
#include <ctype.h>

int	main (void)
{
	char *string = "split  ||this|for|me|||||!|";
	char  **ole = ft_split (string, ' ');
	ole = NULL;
	// for (int i = 0; i < 5; i++)
	// 	printf ("%s\n", ole[i]);
}
