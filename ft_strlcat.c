#include "libft.h"
// size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
// {
    // int i;
    // size_t dstlen;
    // size_t srclen;

    // dstlen = ft_strlen(dst);
    // srclen = ft_strlen(src);
    // i = dstsize; 
    // if(dstlen < dstsize)
    // {
    //     return (dstlen + srclen);
    // }
    // else
    //     return (dstsize + srclen);
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // return (len);

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t          i;
    size_t          j;
    size_t          size_dest;
    size_t          size_src;

    i = 0;
    j = ft_strlen(dest);
    if (size == 0 && !dest)
        return (NULL);
    size_dest = ft_strlen(dest);
    size_src = ft_strlen(src);
    if (size < 1 || size < size_dest)
        return (size_src + size);
    while (src[i] && j < size - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (size_dest + size_src);
}

// #include <stdio.h>
// int main()
// {
//     char src1[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     size_t	max = strlen(src1) + 4;
//     char dst1[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     printf("%lu", ft_strlcat(dst1, src1, 0));


//     char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     size_t	max1 = strlen(src) + 4;
//     char dst[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     printf("\n%lu", strlcat(dst, src, 0));
// }