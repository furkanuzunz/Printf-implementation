#include "../ft_printf.h"

int done_printf(va_list arg_p,const char format)
{
    if(format == 'p')
        return last_pointer(va_arg(arg_p,unsigned long long));
    else if(format == 's')
        return ft_putstr(va_arg(arg_p,char *));
    else if(format == 'c')
        return ft_putchar(va_arg(arg_p,int));
    else if(format == 'd' || format == 'i')
        return ft_putnumber(va_arg(arg_p,int));
    else if(format == 'u')
        return print_unsigned(va_arg(arg_p,unsigned int));
    else if (format == 'x' || format == 'X')
        return ft_puthexadecimal(va_arg(arg_p,unsigned int),format);
    else if(format == '%')
        return ft_putchar('%');
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list arg_p ;
    size_t i = 0;

    int len = 0;
    if(!format)
        return (-1);
    
    va_start(arg_p,format);

    while(format[i])
    {
        if(format[i] == '%')
        {       //%d ise d gider. orada d ise işlevini yapar.
            len += done_printf(arg_p,format[i + 1]);
            i++;
        }
        else
        {
            len += ft_putchar(format[i]);//normal kelimeleri yaz.
        }
    }
    va_end(arg_p); // arg_p nin kullandigi bellegi serbest birakir.
    return (len);
}