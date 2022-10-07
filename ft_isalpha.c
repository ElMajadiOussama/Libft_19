int ft_isalpha(int c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return(1);
    }
    return(0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 76;
//     printf("%d", isalpha(c));
//     printf("\n%d", ft_isalpha(c));
// }