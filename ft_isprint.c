int ft_isprint(int c)
{
    if (c >= 32  && c <= 126)
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
//     printf("%d", isprint(c));
//     printf("\n%d", ft_isprint(c));
// }