#include "cns_str_cpy.h"

int main(void)
{
	{
		char	src[] = "Hello World";
		char	dst[20];
		char	*out;

		out = cns_strcpy(dst, src);
		printf("\ncns_strcpy\n");
		printf("out : %s | dst : %s\n", out, dst);
	}
	{
		char	src[] = "Hello World";
		char	dst[20];
		char	*out;

		out = cns_strncpy(dst, src, 5);
		printf("\ncns_strncpy\n");
		printf("out : %s | dst : %s\n", out, dst);
    }
    {
		char	src[] = "Hello World";
		char	dst[20];
		size_t	out = 0;

		out = cns_strlcpy(dst, src, 5);
		printf("\ncns_strlcpy\n");
		printf("out : %d | dst : %s\n", out, dst);
	}   
	return (0);
}
