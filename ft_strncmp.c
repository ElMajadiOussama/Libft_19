/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:13:01 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 16:22:04 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((b1[i] == b2[i]) && (i < n - 1) && (b1[i] || b2[i]))
	{
		i++;
	}
	return (b1[i] - b2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
//     char s1[] = "atoms\0\0\0\0";
//     char s2[] = "atoms\0abc";
//     printf("%d", ft_strncmp(s1, s2, 1));
//     char s01[] = "atoms\0\0\0\0";
//     char s02[] = "atoms\0abc";
//     printf("\n%d", strncmp(s01, s02, 1));
// }