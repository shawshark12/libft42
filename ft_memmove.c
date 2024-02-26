/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:41 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/26 16:11:35 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
		while (i < n)
			d[i] = [i];
	return (dest);
}
