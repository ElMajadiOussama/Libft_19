#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int len1;
    int len2;
    char *src;
    if (s1 && s2)
    {
        len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
        src = (char *)malloc(sizeof(char) * len1 + len2);
        i = -1;
        if (src == NULL)
			return (NULL);
        while (s1[++i])
            src[i] = s1[i];
        i = -1;
        while (s2[++i])
        {
            src[len1] = s2[i];
            len1++;
        }
    }
    src[len1] = '\0';
    return (src);
}
// #include <stdio.h>
// int main()
// {
//     char s1[] = "abcd";
//     char s2[] = "EFGH";
//     printf("%s\n", ft_strjoin(s1, s2));
// }