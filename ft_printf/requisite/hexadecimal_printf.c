#include "../ft_printf.h"

int ft_hexlen(unsigned int num)
{
    int len;

    len = 0;
    while(num != 0)
    {
        num = num / 16;
        len++;
    }
    return(len);
}

void ft_printhexa(unsigned int num,const char format)
{
    if(num >= 16)
    {
        ft_printhexa(num / 16,format); // bu iki recursive ile sayinin basamaklarina erisiyoruz diyebiliriz.
        ft_printhexa(num % 16,format);
    }
    else
    {
        if(num <= 9)
        {
            ft_putchar((num + '0'));
        }
        else // 9 dan buyukse 0-9 arasina indirgiyoruz.
        {// 12 ise mesela abcd diye gidiyor,2.indeksini almamiz lazim.12 aslinda b ye mi ne geliyor karsilik.biz 2 yapiyoruz üstüne de iste 'a' ekliyoruz. 'b' yi elde ediyoruz.
            if(format == 'x')
            {
                ft_putchar((num - 10 + 'a'));
            }
            else if(format == 'X')
            {
                ft_putchar((num - 10 + 'A'));
            }
        }
    }

}

int ft_puthexadecimal(unsigned int num,const char type)
{
    if(num == 0)
    {
        return (write(1,"0",1));
    }
    else
        ft_printhexa(num,type);
    return (ft_hexlen(num));
}