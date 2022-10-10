#include "libft.h"

int count_world(char s, char c)
{
    // int i;

    // i = 0;
    // while (s[i])
    // {
        if (s == c)
            return (1);
        else
            return (0);
        // i++;
    // }
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;

    i = 0;
    while (*s)
    {
        while (count_world(s, c) == 1)
          i++;
        j = 0;
        while (count_world(s, c) == 0)
            j++;

    }
}

int main()
{
    printf(ft_splitf("je suis au sl", " "));
}