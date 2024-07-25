#include "cns_str_cpy.h"

char	*cns_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
