#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = 0;
        i++; 
    }
    
}

// #include <stdio.h>
// int main()
// {
//     char s[] = "abcdefg";
//     printf("%s\n", bzero(s, 1));
//     char s1[] = "abcdefg";
//     ft_bzero(s1, 3);
// }

// Main fonctionne pas.