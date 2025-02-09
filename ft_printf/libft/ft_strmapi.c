#include "libft.h"

char *ft_strmapi(const char *s,char (*f)(unsigned int,char))
{
    char *vow;
    size_t slen;
    size_t i;

    i = 0;
    if(!s)
        return (ft_strdup(""));//boş bir dize döndürerek cagırının güvenli bir sekilde devam etmesini sağladik.
    
    slen = ft_strlen(s);
    vow = (char *)malloc(sizeof(char) * (slen + 1));
    if(!vow)
        return NULL;
    while(i < slen)
    {
        vow[i] = (*f)(i,s[i]);
        ++i;
    }
    vow[i] = 0;
return vow;
}