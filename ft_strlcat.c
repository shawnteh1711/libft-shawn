#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	int		j;
	size_t	dest_len;
	size_t	src_len;

	j = len;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (*dest)
	{
		dest++;
		if (j > 0)
			j--;
	}
	while (*src && j > 1)
	{
		*dest++ = *src++;
		j--;
	}
	*dest = '\0';
	if (len > dest_len)
		return (dest_len + src_len);
	return (len + src_len);
}
