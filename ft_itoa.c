#include <stdlib.h>

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

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc (sizeof(n));
	if (str != 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		if (n < 0)
		{
			n = -n;
			str[i++] = '-';
		}
		ft_putnbr_lp (n, str, i);
	}
	else
		return (0);
	return (str);
}
