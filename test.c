#include "libft.h"
#include <string.h>
#include <ctype.h>

int	main (void)
{
	char	*table = "JAN,FEB,MAR,APR,MAY,JUNE,JUL,AUG,,OCT,NOV,DEC";
	char	c = ',';

	// printf ("Resultado original: %s\n", strnstr(s1, s2, len));
	// printf ("Resultado CUSTOMIN: %s\n", ft_strnstr(s1, s2, len));
	ft_split (table, c);
}

// int main () {
//    char str[80] = "JAN,FEB,MAR,APR,MAY,JUNE,JUL,AUG,SEP,OCT,NOV,DEC";
//    const char s[2] = ",";
//    char *token;
   
//    /* get the first token */
//    token = strtok(str, s);
   
//    /* walk through other tokens */
//    while( token != NULL ) {
//       printf( " %s\n", token );
    
//       token = strtok(NULL, s);
//    }
   
//    return(0);
// }
