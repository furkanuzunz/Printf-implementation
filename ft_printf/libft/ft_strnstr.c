#include "libft.h"

char *ft_strnstr(const char *bigOne,const char *littleOne,size_t len)
{
    size_t i;
    size_t j;
    char *s1;
    char *s2;

    i = 0;
    j = 0;
    s1 = (char *)bigOne;
    s2 = (char *)littleOne;
    if(*s2 == '\0')
        return s1;
    while((len > i) && ( s1[i] != '\0'))
    {
        j = 0;
        while(s1[i + j] == s2[j] && (len > (i + j)))
        {
            if(s2[j] + 1 == '\0')
                return (s1 + i);
            j++;
        }
        i++;
    }
    return 0;
}