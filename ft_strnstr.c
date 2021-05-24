/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:04:24 by amateo-r          #+#    #+#             */
/*   Updated: 2021/05/24 13:04:27 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	k;

	if (needle == NULL)
		return ((char *)haystack);
	else if (!*needle)
		return ((char *)haystack);
	while (haystack[len] != '\0')
	{
		len--;
	}
	return (NULL);
}
