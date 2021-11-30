#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i++ < len)
		*ptr++ = 0;
	return (0);
}
