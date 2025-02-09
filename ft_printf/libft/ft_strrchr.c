#include "libft.h"
//  son eşleşmeyi bulur.tutar.
char *ft_strrchr(const char *s, int c)
{
    unsigned int length;

    length = ft_strlen(s);
    while (length > 0)
    {
        if ((char)c == *(s + length))
            return ((char *)(s + length));
        length--;
    }
    if (*(s + length) == (char)c)
        return ((char *)(s + length));
    return (NULL);
}