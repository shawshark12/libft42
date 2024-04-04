/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:19:28 by npungkor          #+#    #+#             */
/*   Updated: 2024/04/04 22:19:30 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strtrim allocate and return a copy of s1 with 'set' remove
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i])
	{
		while (ft_strchr(set, s1[i]) && s1[i])
			i++;
		if (i == len)
			return (ft_substr(s1, i, 0));
		while (ft_strchr(set, s1[len - 1]))
			len--;
		return (ft_substr(s1, i, len - i));
	}
	return (ft_substr(s1, i, 0));
}
