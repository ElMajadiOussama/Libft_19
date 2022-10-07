#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] < 14 && str[i] > 8) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * neg);
}
/*
#include <stdio.h>
int main()
{
	char str[] = " -++1234ab567";
	printf("%d", ft_atoi(str));
}
*/