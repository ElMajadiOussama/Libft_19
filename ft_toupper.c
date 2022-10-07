int	ft_toupper(int c)
{
		if (c >= 'a' && c <= 'z')
            c -=32;
        return(c);
}
// #include <stdio.h>
// int main()
// {
// 	int c = 97;
// 	printf("%d", ft_toupper(c));
// 	return(0);
// }