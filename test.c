#include "libft.h"

// char *ft_strtrim(char const *s1, char const *set)
// {
//     int i;
//     int j;
//     int len1;
//     char *src;

//     len1 = ft_strlen(s1);
//     src = (char *)malloc(sizeof(char) * len1 + 1);
//     i = 0;
//     if (!s1)
//         return (NULL);
//     if (!(src = (char *)malloc(sizeof(char) * (len1 + 1))))
//         return (NULL);
//     while ((s1[i] < 14 && s1[i] > 8) || s1[i] == 32)
//       i++;
//     i--;
//     j = 0;
//     while (s1[++i])
//     {
//       if ((s1[i] < 14 && s1[i] > 8) || s1[i] == 32)
//         i++;
//       else
//       {
//         src[j] = s1[i];
//         j++;
//       }
//     }
//     src[j] = '\0';
//     return (src);
// }
// #include <stdio.h>
// int main()
// {
//     char s1[] = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
//     char s2[] = "Hello \t  Please\n Trim me !";
//     printf("%s\n", ft_strtrim(s1, s2));
// }