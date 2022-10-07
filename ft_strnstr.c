#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if(!*needle)
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j=0;
        while (haystack[i + j] == needle[j] && (i + j < len))
        {
            if (needle[j + 1] == '\0')
                return (&((char *)haystack)[i]);
            j++;
        }
        i++;
    }
    return(0);
}
// #include <stdio.h>
// int main()
// {

//     char    *hay = "MZIRIBMZIRIBMZE123";
//     char    *need = "";
//     printf("ft_strnstr: %s\n", ft_strnstr(hay,need, 2));

//     char    *hay1 = "MZIRIBMZIRIBMZE123";
//     char    *need1 = "";
//     printf("aa_strnstr: %s", strnstr(hay1,need1, 2));

//     return 0;
// }