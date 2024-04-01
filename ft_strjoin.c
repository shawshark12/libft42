/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:59:48 by npungkor          #+#    #+#             */
/*   Updated: 2024/04/01 18:28:26 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		l1;
	int		l2;
	int		i;
	char	*result;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (l1 + l2) + 1);
	if (result == 0)
		return (0);
	while (*s1)
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		result[i] = *s2;
		s2++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
