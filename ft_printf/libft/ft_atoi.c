int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = -1;
    result = 0;
    while(str[i] == 32 || (str[i] >= 0 && str[i] <= 13))
    {
        i++;
    }
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10;
        result += (str[i] - 48);
        i++;
    }
    return (result*sign);
}