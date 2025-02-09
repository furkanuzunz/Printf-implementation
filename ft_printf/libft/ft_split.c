#include "libft.h"

static void ft_memorizeheh(char **hoh, const char *str, char seperator)
{
    char **hohi;
    const char *temp;

    temp = str;
    hohi = hoh;
    while (*temp)
    {
        while (*str == seperator)
        {
            ++str;
        }
        temp = str; // ayrilan mesela diğer parttan bakmaya devam ediyoruz
        while (*temp && *temp != seperator)
        {
            ++temp;
        }
        if (*temp == seperator || temp > str)
        {
            *hohi = ft_substr(str, 0, temp - str);
            str = temp; // str işaretçisi tempin gösterdii konuma taşinir.
            ++hohi; // bir sonraki kelime icin bir sonraki adrese gectik.split foksiyonunda new ile ayirdiğimiz alan şuan burda hohide.
        }
    }
    *hohi = NULL; // sonunu null yaptik.
}

int ft_count_words(const char *str, char seperator)
{
    int count_word;

    count_word = 0;
    while (*str)
    {
        while (*str == seperator)
            ++str; // ayiriciyi atlamak icin
        if (*str)
            count_word++; // kelime buldugunda arttir.
        while (*str && *str != seperator)
            ++str; // kelimenin sonuna kadar gittik
    }

    return count_word;
}

char **ft_split(char const *str, char sep) // c bir ayirici karakteri
{
    char **new; // kelimeleri ayirdiktan sonra stringleri yani dizileri saklayacağimz
    // bir yeni dizi lazim. işareçti dizisi gibi düşünücez. cunku aslinda dizileri saklarken onlar da bir adres verir bize isimleri.
    // e biz ayirici ile dizilere ayirdik.dizi1,dizi2 bunlar dizi1[] = "osman" oldu bu da aslinda bir *dizi1 işaretçi yani
    // bunlari saklamak icin bize double pointer lazim.
    int size;

    if (!str)
    {
        return NULL;
    }
    size = ft_count_words(str, sep);
    new = (char **)malloc(sizeof(char *) * (size + 1));
    if (!new)
        return NULL;
    ft_memorizeheh(new, str, sep);
    return  new;
}