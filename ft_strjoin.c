/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:59:48 by npungkor          #+#    #+#             */
/*   Updated: 2024/03/25 20:09:54 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjion(const char *s1, const char *s2)
{
	int	l1;
	int	l2;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);

	result = (char*)malloc(l1 + l2 +1);

	if (result == NULL)
		return (NULL);
	ft_strcpy(result, s1);
	ft_strcpy(result + l1, s2):
		return (result);
}
