#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*final;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	final = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (final == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
