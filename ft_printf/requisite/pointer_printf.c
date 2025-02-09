#include "../ft_printf.h"

static int count_pointer(unsigned long long ptr)
{
    int count;
    // 16lık tabandaki basamak sayisini hesapladik.
    count = 0;
    while( ptr != 0)
    {
        count++;
        ptr = ptr / 16;
    }
    return (count);
}

int ft_print_pointer(unsigned long long ptr)
{
    if(ptr >= 16)
    {
        ft_print_pointer(ptr / 16);
        ft_print_pointer(ptr % 16);
    }
    else
    {
        if(ptr <= 9)
        {
            ft_putchar(ptr + '0');
        }
        else
        {
            ft_putchar(ptr - 10 + 'a');
        }
    }
    return (count_pointer(ptr));
}
int last_pointer(unsigned long long ptr)
{
    int len;

    len = 0;
    if(ptr == 0)
    {
        len += write(1,"(nil)",5);
        return (len);
    }
    len = write(1,"0x",2);
    len += ft_print_pointer(ptr);
    return (len);
}