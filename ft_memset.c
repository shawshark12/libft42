/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:35:29 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/27 18:20:12 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	i = 1;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
