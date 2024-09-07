#include "cns_str_cpy.h"

static size_t	cns_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*cns_strdup(const char *s)
{
	char	*new_str;
	int		i;

	new_str = (char *)malloc(cns_strlen(s) + 1);
	if (!new_str)
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
