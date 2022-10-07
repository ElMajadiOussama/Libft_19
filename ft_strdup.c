#include "libft.h"
char *ft_strdup(const char *s1)
{
    int		i;
	char	*dest;
	char	*x;

	i = 0;
	x = ((dest = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1)));
	if (!x)
	{
		return (0);
	}
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main()
// {
//     char s1[] = "dfgdfvrdgvdghgfd";
//     ft_strdup(s1);
// }