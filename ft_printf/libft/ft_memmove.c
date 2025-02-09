#include "libft.h"

void *ft_memmove(void *dest,const void *src,size_t n)
{
    const unsigned char *source;
    unsigned char *destination;

    destination = (unsigned char *)dest;
    source = (const unsigned char *)src;

    if(!dest && !src)
        return destination; // 0 dondur aslinda yani
    if(destination < source)
    {
        /*
        Eğer dest adresi, src adresinden küçükse (yani hedef bölge, 
        kaynak bölgenin öncesinde yer alıyorsa), çakışma riski yoktur.
        yani normal kopyalama yapabiliriz soldan sağa olcak şekilde amma velakin altta destin konum büyükse srcden
        o zaman sağdan sola kopyalama yapariz cakisma riski var cunku overlap deniliyor sanirim buna
        hani sourcenin sonu destin basina cakisabilir öyle düşün ondan sondan basa geriye koyaliyoruz.
        */
        return (ft_memcpy(dest,src,n));
    }
    source = (unsigned char *)src;
    destination = (unsigned char *)dest;
    while(n)
    {
        destination[n] = source[n];
        n--;
    }
    return (dest);
}