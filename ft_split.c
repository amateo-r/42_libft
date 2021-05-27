/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:59:16 by amateo-r          #+#    #+#             */
/*   Updated: 2021/05/26 11:29:14 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count (char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = -1;
	count = 0;
	flag = 0;
	while (s[++i] != '\0')
	{
		printf ("Para [%d] flag, char: FC(%d, %c)\n", i, flag, s[i]);
		if (flag == 1 && s[i] == c)
			flag = 0;
		else if (flag == 0 && s[i] != c)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

static void	ft_ijk(int ijk[3])
{
	int	i;

	i = -1;
	while (++i < 3)
		ijk[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		len;
	int		ijk[3];
	int		count;

	len = ft_count(s, c);
	printf ("Len: %d\n", len);
	table = (char **)malloc(sizeof(char *) * ft_strlen(s) - len + 1);
	ft_ijk(ijk);
	while (len--)
	{
		count = 0;
		while (s[ijk[0]] == c)
			ijk[0]++;
		ijk[1] = ijk[0];
		while (s[ijk[0]] != c && s[ijk[0]] != '\0')
		{
			ijk[0]++;
			count++;
		}
		table[ijk[2]] = malloc(count + 1);
		table[ijk[2]] = ft_substr (s, ijk[1], count);
		ijk[0]++, ijk[2]++;
	}
	table[ijk[2]] = NULL;
	return (table);
}
