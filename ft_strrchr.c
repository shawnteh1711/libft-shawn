#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int)ft_strlen(str) + 1;
	while (i--)
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	return (NULL);
}
