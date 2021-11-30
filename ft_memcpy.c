#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while  (i < num)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}
