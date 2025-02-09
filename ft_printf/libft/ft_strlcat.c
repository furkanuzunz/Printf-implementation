#include "libft.h"

size_t ft_strlcat(char *dst,const char *src,size_t size)
{
    size_t i;
    size_t j;
    char *p_src;

    p_src = (char *)src;
    i = 0;
    while(i < size && *dst) // dst null olmayana ve i < size olana dek devam ikisi de doğru ise döner.
    {
        dst++; // burda dsti ilerlettikki sonundna ekleme yapabilelim.
        i++;
    }
    if(i == size)
        return (i + ft_strlen(src)); // == Eğer dst dizisi yeterince büyük olsaydı, birleştirilmiş dizenin toplam uzunluğu ne olurdu?

    j = 0;
    while(p_src[j])
    {// size , dst dizisinin toplam boyutu unutma
    // i ise dst dizisinin baslangictaki uzunlugu
    // 1 ise null icin birakilir
        if(j + 1 <  size - i)
            *(dst++) = p_src[j];
        j++;
    }
    *dst = 0;
return ( j + i);
/*
j: src dizisinin uzunluğu.
i: dst dizisinin başlangıçtaki uzunluğu.
Toplam: Birleştirilmiş dizenin ideal uzunluğu .
*/


}