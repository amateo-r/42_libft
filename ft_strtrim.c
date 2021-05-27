/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:29:50 by amateo-r          #+#    #+#             */
/*   Updated: 2021/05/26 12:33:13 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		s1_len;
	int		set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (ft_strncmp(set, s1, set_len) != 0)
		return ("\0");
	if (ft_strncmp(set, s1 + (s1_len - set_len), set_len) == 0)
		return ("\0");
	dst = (char *)malloc (sizeof(char) * s1_len - set_len * 2);
	dst = (char *)s1 + set_len;
	dst = ft_substr(dst, 0, ft_strlen(dst) - set_len);
	return (dst);
}
