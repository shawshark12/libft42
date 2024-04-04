/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:18:18 by npungkor          #+#    #+#             */
/*   Updated: 2024/04/04 22:18:26 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate and return a string representing interger, handle negative
#include "libft.h"

int	ft_digit(int n)
{
	int	index;

	index = 1;
	if (n < 0)
		index++;
	while (n / 10)
	{
		index++;
		n = n / 10;
	}
	return (index);
}

char	*ft_itoa(int n)
{
	char	*nums;
	int		size;
	int		i;

	size = ft_digit(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	nums = (char *)ft_calloc(sizeof(char), (size + 1));
	if (!nums)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		nums[0] = '-';
	}
	i = size - 1;
	while (n != 0)
	{
		nums[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (nums);
}
