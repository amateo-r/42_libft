#include <stdio.h>
#ifndef LIBFT_H
# define LIBFT_H
int				ft_strlen (char *str);
int				ft_strncmp (char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_itoa(int n);
void			ft_putchar_fd (char c, int fd);
void			ft_putstr_fd (char *s, int fd);
void			ft_putendl_fd (char *s, int fd);
void			ft_putnbr_fd (int n, int fd);
#endif