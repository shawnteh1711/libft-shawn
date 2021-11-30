#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
		while (len--)
			*(unsigned char *)(dest + len) = *(unsigned char *)(src + len);
	return (dest);
}	
