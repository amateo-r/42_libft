/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:59:16 by amateo-r          #+#    #+#             */
/*   Updated: 2021/05/25 10:59:24 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count (char const *s, char c)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (s[++i] != '\0')
		if (s[i] == c)
			count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		len;
	int		i;
	int		j;
	int		k;
	int		count;

	len = ft_count(s, c);
	table = (char **)malloc(sizeof(char *) * ft_strlen(s) - len + 1);
	i = 0;
	j = 0;
	k = 0;
	printf ("LEN: %d\n", len);
	while (len--)
	{
		j = i;
		count = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			count++;
		}
		printf ("K: %d\n", k);
		//table[k] = ft_substr (s, j, count);
		i++;
		k = j - count;
		printf ("LEN: %d\n", len);
	}
	table[k] = NULL;
	free (table);
	return (table);
}
// JAN,FEB,MAR,APR,MAY,JUNE,JUL,AUG,,OCT,NOV,DEC 34
