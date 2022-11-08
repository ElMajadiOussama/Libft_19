/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:57:28 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 17:11:00 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(long nb)
{
	if (nb == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	long long		sign;
	int				res;
	int				i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res < 0)
		overflow(sign);
	return (res * sign);
}
/*
#include <stdio.h>
int main()
{
	char str[] = " -++1234ab567";
	printf("%d", ft_atoi(str));
}
*/