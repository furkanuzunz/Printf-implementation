#include "libft.h"
#include "stdlib.h"

char *ft_strdup(const char *str)
{
    int i;
    size_t len;
    char *destination;

    i = 0;
    len = ft_strlen(str);
    destination = (char *)malloc(sizeof(char)* (len + 1));
    if(!destination)
    {
        return (NULL);
    }
    while(str[i])
    {
        destination[i] = str[i];
        i++;
    }
    destination[i] = '\0';
    return destination;
}