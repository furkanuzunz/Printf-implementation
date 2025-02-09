#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(const char *str1,const char *str2)
{
    int i;
    int j;
    char *memory;

    i = 0;
    j = 0;
    memory = (char *)malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
    if(!memory)
        return NULL;
    while (str1[i])
    {
        memory[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while(str2[i])
    {
        memory[j] = str2[i];
        i++;
        j++;
    }
    *memory = '0';

return memory;
}