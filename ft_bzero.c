/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:41:02 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 14:58:31 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}	
}

// #include <stdio.h>
// int main()
// {
//     char s[] = "abcdefg";
//     printf("%s\n", bzero(s, 1));
//     char s1[] = "abcdefg";
//     ft_bzero(s1, 3);
// }

// Main fonctionne pas.