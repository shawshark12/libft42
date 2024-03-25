/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:30:15 by npungkor          #+#    #+#             */
/*   Updated: 2024/03/15 21:01:12 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*bag;

	bag = (unsigned char *)s;
	while (*bag)
	{
		bag++;
	}
	while (bag >= (unsigned char *) s)
	{
		if (*bag == (unsigned char) c)
			return ((char *)bag);
		bag--;
	}
	return (0);
}
