int	ft_tolower(int c)
{
		if (c >= 'A' && c <= 'Z')
            c +=32;
        return(c);
}
// #include <stdio.h>
// int main()
// {
// 	int c = 97;
// 	printf("%d", ft_tolower(c));
// 	return(0);
// }