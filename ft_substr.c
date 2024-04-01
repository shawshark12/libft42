/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:39:38 by npungkor          #+#    #+#             */
/*   Updated: 2024/04/01 18:43:06 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*bag;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)(ft_strlen(s)))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	bag = malloc(sizeof(char) * (len) + 1);
	if (bag == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		bag[i] = s[start + i];
		i++;
	}
	bag[i] = '\0';
	return (bag);
}
