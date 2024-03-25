/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:20:21 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/22 21:52:12 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sl;
	size_t	dl;
	size_t	i;

	i = 0;
	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dst == NULL && size <= 0)
		return (0);
	if (size <= dl)
		return (size + sl);
	while ((dl + i) < (size - 1) && src[i])
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}
