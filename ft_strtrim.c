#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    size_t size_s;
    char *newstring;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    size_s = ft_strlen(s1);
    while (size_s && ft_strchr(set, s1[size_s]))
        size_s--;
    newstring = ft_substr((char*)s1, 0, size_s + 1);
    return (newstring);
    
}
#include <stdio.h>
int main()
{
    char s1[] = "dABjeBA";
    char s2[] = "AB";
    printf("%s\n", ft_strtrim(s1, s2));
}