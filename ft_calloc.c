#include "libft"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count < 0 || size < 0 || (count && SIZE_MAX / count < size))
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return ((void *)p);
}
