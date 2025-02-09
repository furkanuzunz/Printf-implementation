#include "libft.h"

char *ft_strchr(const char *s,int d)
{
    char *ptr;

    ptr = (char *)s;
    while(*ptr)
    {
        if(*ptr == (unsigned char)d)
                return ptr;
    }
    if(d == 0)
    {
        return ptr;
    }
    return NULL;
}