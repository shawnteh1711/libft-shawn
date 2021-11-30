#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < (int)num - 1)
		i++;
	if (num)
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	return (0);
}
