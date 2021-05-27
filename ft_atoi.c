#include "libft.h"

static int	ft_isodd(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			count;
	int			sign;
	long int	nb;

	nb = 0;
	sign = 1;
	i = ft_isodd(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	count = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++, count++;
	}
	if (ft_strlen(str) > 18 && sign == -1 && count > 18)
		return (0);
	else if (ft_strlen(str) > 18 && count > 18)
		return (-1);
	return ((int)nb * sign);
}
