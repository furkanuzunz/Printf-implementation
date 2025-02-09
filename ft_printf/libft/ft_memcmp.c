#include <stddef.h>

int ft_memcmp(const void *str1,const void *str2,size_t n)
{
    unsigned char *st1;
    unsigned char *st2;
    // unsigned char tam olarak 1 byte yer kaplar, böylelikle tek tek gezebilir bellekteki her baytı
    st1 = (unsigned char *)str1;
    st2 = (unsigned char *)str2;

    while(n)
    {
        if(*st1 != *st2 )
        {
            return ( *st1 - *st2); 
        }
        st1++;
        st2++;
        n--;
    }
    return 0;


}