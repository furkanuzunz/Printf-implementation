#include "libft.h"

void *ft_memset(void *sas,int c,size_t n)
{
    size_t i;
    char *s;

    s = (char *)sas;
    i = 0;
    while(i < n)
    {
        s[i] = c;
        i++;
    }
    return (s);
}