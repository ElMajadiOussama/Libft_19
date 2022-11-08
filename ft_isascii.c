/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:10:46 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 15:37:11 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 76;
//     printf("%d", isascii(c));
//     printf("\n%d", ft_isascii(c));
// }