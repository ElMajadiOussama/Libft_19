#include "libft.h"
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;
    if(!dst && !src)
        return (0);
    while (i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return(dst);
}
// #include <stdio.h>
// int main()
// {
//     char dst[] = "abc";
//     char src[] = "defcds";
//     printf("%s", ft_memcpy(dst, src, 1));
//     char dst1[] = "abc";
//     char src1[] = "defdsc";
//     printf("\n%s", memcpy(dst1, src1, 1));
// }