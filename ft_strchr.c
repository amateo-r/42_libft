/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:07:01 by amateo-r          #+#    #+#             */
/*   Updated: 2021/05/24 12:47:37 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr (const char *s, int c)
{
	unsigned int	i;

	if (s == NULL && c == 0)
		return ("\0");
	else if (s == NULL)
		return (0);
	i = -1;
	while (s[++i] != c)
		if (s[i] == '\0')
			return (NULL);
	return ((char *) s + i);
}
