#include <stddef.h>
void ft_bzero(void *str,size_t n)
{
    unsigned char *p;

    p = str;
    while(n)
    {
        *(p++) = 0;
        --n;
    }


}