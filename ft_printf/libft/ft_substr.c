#include "libft.h"

char *ft_substr(const char *str,unsigned int start,size_t len)
{
    char *s;
    unsigned int i;

    s = (char *)str;

    i = 0;
    if(!str)
        return NULL;
    if( (int)start > ft_strlen(str))
        return ft_strdup("");
    if(len > (ft_strlen(str) + start))
        len = ft_strlen(s + start);
    s = ft_calloc(len + 1,sizeof(char));
    if(!str)
        return NULL;
    while(i < len)
    {
        s[i] = str[start + i];
        i++;
    }
    return s;
}