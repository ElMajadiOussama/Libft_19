/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:12:27 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 15:57:43 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = c;
	if (cc == '\0')
	{
		while (s[i])
			i++;
		return (((char *)s) + i);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
		{
			return (((char *)s) + i);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     char s[] = "af9";
//     int c = '9';
//     printf("%s", ft_strchr(s, c));
//     char s1[] = "af9";
//     int c1 = '9';
//     printf("\n%s", strchr(s1, c1));
// }