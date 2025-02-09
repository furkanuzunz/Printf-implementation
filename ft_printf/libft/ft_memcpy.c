#include <string.h>

void *ft_memcpy(void *dest,const void *src,size_t sizek)
{
    size_t i;
    char *source;
    char *destination;

    i = 0;
    source = (char *)src;
    destination = (char *)dest;
    if(!dest && !src)
    {
        return NULL;
    }
    while(i < sizek)
    {
        destination[i] = source[i];
        i++;
    }
    return destination;
}