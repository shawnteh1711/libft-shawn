#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const char	*str;
	size_t		i;

	str = (const char *)ptr;
	i = 0;
	while (++i < num)
		if (*(str + i) == (char)value)
			return ((void *)str + i);
	return (NULL);
}
