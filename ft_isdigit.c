int ft_isdigit( int c)
{
    if(c >= '0' && c <= '9')
    {
        return(1);
    }
    return(0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 4;
//     printf("%d", isdigit(c));
//     printf("\n%d", ft_isdigit(c));
// }