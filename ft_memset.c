/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:12:06 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 16:55:30 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
// #include <stdio.h>
// int main()
// {
//     int c = 97;
//     char b[] = "ddd";
//     printf("%s", ft_memset(b, c, 4));
//     int c1 = 97;
//     char b1[] = "ddd";
//     printf("\n%s", memset(b1, c1, 4));
// }