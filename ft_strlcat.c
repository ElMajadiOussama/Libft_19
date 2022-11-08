/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:12:50 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 17:10:38 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < len)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < len - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < len)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}

// #include <stdio.h>
// int main()
// {
//     char src1[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     size_t	max = strlen(src1) + 4;
//     char dst1[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     printf("%lu", ft_strlcat(dst1, src1, 0));
//     char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     size_t	max1 = strlen(src) + 4;
//     char dst[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     printf("\n%lu", strlcat(dst, src, 0));
// }