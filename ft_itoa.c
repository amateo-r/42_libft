#include "libft.h"

static int	ft_putnbr_lp (int n, char *str, int pos)
{
	if (n > 9)
	{
		pos = ft_putnbr_lp(n / 10, str, pos);
		pos++;
		pos = ft_putnbr_lp(n % 10, str, pos);
	}
	else
		str[pos] = n + '0';
	return (pos);
}

static int	ft_digits (int n)
{
	int	count;

	if (n == 0)
		return  (1);
	if (n < 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_digits(n) + 1));
	if (str != 0)
	{
		if (n == -2147483648)
			return (ft_strcpy (str, "-2147483648"));
		if (n < 0)
		{
			n = -n;
			str[i++] = '-';
		}
		i = ft_putnbr_lp (n, str, i) + 1;
		str[i] = '\0';
	}
	else
		return (0);
	return (str);
}
