/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:10:54 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 15:44:50 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit( int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 4;
//     printf("%d", isdigit(c));
//     printf("\n%d", ft_isdigit(c));
// }