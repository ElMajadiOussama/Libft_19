int ft_isalnum(int c)
{
    if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return(1);
    }
    return(0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 48;
//     printf("%d", isalnum(c));
//     printf("\n%d", ft_isalnum(c));
// }