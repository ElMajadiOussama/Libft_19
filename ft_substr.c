#include "libft.h"
// s: La chaîne de laquelle extraire la nouvelle chaîne.
// start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
// len: La taille maximale de la nouvelle chaîne.
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char* str;

    i = 0;
    j = 0;
    if (!s)
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (s[i])
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return (str);
}
// #include <stdio.h>
// int main()
// {
//     char* str;

//     str = ft_substr("Hello, 42bal!", 7, 2);
//     printf("%s\n", str);

//     return 0;
// }
