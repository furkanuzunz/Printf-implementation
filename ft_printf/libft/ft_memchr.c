#include <stddef.h>

void *ft_memchr(const void *s,int a,size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(((unsigned char*)s)[i] == (unsigned char)a)
        {
            return ((void *)((unsigned char *)s + i));
        }
        i++;
    }
    return NULL;
}