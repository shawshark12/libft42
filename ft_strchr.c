/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:58:04 by npungkor          #+#    #+#             */
/*   Updated: 2024/03/15 20:27:25 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	unsigned char bag;

	bag = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == bag)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == bag)
		return ((char *)&s[i]);
	return (0);
}
