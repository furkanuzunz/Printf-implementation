#ifndef FT_PRINTF_H
#define FT_PRINTF_H

 
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnumber(int n);

int ft_puthexadecimal(unsigned int num,const char type);

int print_unsigned(unsigned int n);

int last_pointer(unsigned long long ptr);

int ft_printf(const char *format, ...);


















#endif