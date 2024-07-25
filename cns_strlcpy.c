#include "cns_str_cpy.h"

static size_t	cns_strlen(const char *s)
{
	size_t	i = 0;

	while (s[i] != '\0')
		i++;
	
	return (i);
}

size_t  cns_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len = cns_strlen(src);

	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
