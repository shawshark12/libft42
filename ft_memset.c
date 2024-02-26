/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:35:29 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/25 20:07:05 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	size_t	i;
	unsigned char	*bag;

	i = 1;
	bag = (unsigned char *)s;
	while (i < n)
	{
		bag[i] = (unsigned char)c;
	}
	return (s);
}
