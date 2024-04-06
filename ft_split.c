/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:30:44 by rpithaks          #+#    #+#             */
/*   Updated: 2024/04/04 22:58:30 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocate and return array of string by split s with c end with NULL ptr    */
#include "libft.h"

#include "libft.h"

static void	ft_init_vars(size_t *i, size_t *j, int *is_word);
static char	*ft_create_word(char const *str, int start, int end);
static int	ft_count_word(char const *s, char c);
static void	*ft_free(char **words, int count);

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	s_len;
	size_t	i;
	size_t	j;
	int		is_word;

	words = ft_calloc(sizeof(char *), ft_count_word(s, c) + 1);
	if (!words)
		return (NULL);
	ft_init_vars(&i, &j, &is_word);
	s_len = ft_strlen(s);
	while (++i <= s_len)
	{
		if (s[i] != c && is_word < 0)
			is_word = i;
		else if ((s[i] == c || i == s_len) && is_word >= 0)
		{
			words[++j] = ft_create_word(s, is_word, i);
			if (!words[j])
				return (ft_free(words, j));
			is_word = -1;
		}
	}
	return (words);
}

static void	ft_init_vars(size_t *i, size_t *j, int *is_word)
{
	*i = -1;
	*j = -1;
	*is_word = -1;
}

static char	*ft_create_word(char const *str, int start, int end)
{
	char	*word;
	int		i;

	word = ft_calloc(sizeof(char), end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	return (word);
}

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 1;
	while (*s)
	{
		if (*s != c && is_word == 1)
		{
			count++;
			is_word = 0;
		}
		else if (*s == c)
			is_word = 1;
		s++;
	}
	return (count);
}

static void	*ft_free(char **words, int count)
{
	int	i;

	i = -1;
	while (++i < count)
		free(words[i]);
	free(words);
	return (NULL);
}
