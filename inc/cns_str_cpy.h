#ifndef CNS_STR_CPY_H
# define CNS_STR_CPY_H

# include <stdio.h>
# include <stdlib.h>

char    *cns_strcpy(char *dst, const char *src);
char    *cns_strncpy(char *dst, const char *src, size_t n);
size_t  cns_strlcpy(char *dst, const char * src, size_t size);
char	*cns_strdup(const char *s);

#endif