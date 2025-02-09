#include "libft.h"

static int set_finder(char c,char *set)
{
    int i;

    i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(const char *s1,const char *set)
{
    char *str;
    size_t i;
    size_t j;
    size_t sorijlen;

    i = 0;
    j = 0;
    if(s1 == 0 || set == 0)
        return 0;
    sorijlen = ft_strlen(s1);
    while(s1[j] && set_finder(s1[j],(char *)set))
        j++; // bastaki karakterleri atladik
    while(sorijlen > j && set_finder(s1[sorijlen - 1],(char *)set))
        sorijlen--; //sondakileri atladik
    str = (char *)malloc(sizeof(char) * ( sorijlen -j + 1));
    if(!str)
        return NULL;
    while(j < sorijlen)
        str[i++] = s1[j++]; // yeni diziye sildiğimiz kisimdan öncesine dek kopyaliyoz.
    str[i] = '\0';
    return str;
}