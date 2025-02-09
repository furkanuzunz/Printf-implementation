#include "../ft_printf.h"

int len_u_num(unsigned int num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return (len);
}


char *ft_utoa(unsigned int n)
{
    int len;

    char *numb;

    len = len_u_num(n);
    numb = (char *)malloc((len + 1) * sizeof(char *));
    if(!numb)
        return (NULL);
    numb[len] = '\0';
    while(n != 0)
    {
        numb[len - 1] = n % 10;
        numb[len - 1] += '0';
        n = n / 10;
        len--;
    }
    return (numb);
}

int print_unsigned(unsigned int n)
{
    int len;
    char *numb;

    len = 0;
    if(n == 0)
    {
        write(1,"0",1);
        return 1;
    }
    else
    {
        numb = ft_utoa(n);
        len += ft_putstr(numb);
        free(numb);
    }   
    return (len);
}