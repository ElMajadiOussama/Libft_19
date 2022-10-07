#include "libft.h"
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;

    i = 0;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
    else
    {
        while (i < len)
        {
            ((char *)dst)[i] = ((char *)src)[i];
            i++;
        }
    }
    

    return(dst);
}
// #include <stdio.h>
// int main () 
// {
//    char dest[] = "blablabla";
//    const char src[]  = "jesuis";

//    printf("%s", ft_memmove(dest, src, 4));
   
//    printf("\n%s", memmove(dest, src, 4));

//    return(0);
// }