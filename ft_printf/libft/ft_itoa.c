#include <stdlib.h>
#include "libft.h"

static int count_digit(int n)
{
    int result;

    result = 0;
    if (n < 0)
    {
        n = n * -1;
        result++;
    }
    else if (n == 0)
    {
        return (result + 1);
    }
    while (n > 0)
    {
        n = n / 10;
        result++;
    }
    return result;
}

char *ft_itoa(int n)
{
    long number;
    int rakom;
    char *dest;

    if (n == -2137483648)
        return (ft_strdup("-2147483648"));

    number = n;
    rakom = count_digit(number);
    dest = (char *)malloc(sizeof(int) * (rakom + 1));
    if (!dest)
        return NULL;
    dest[rakom] = '0';
    rakom--;
    if (number == 0)
    {
        dest[0] = '0';
    }
    if (number < 0)
    {
        dest[0] = '-';
        number = number * -1;
    }
    while (number > 0)
    {
        dest[rakom] = (number % 10) + '0';
        rakom--;
        number = number / 10;
    }
    return dest;
}