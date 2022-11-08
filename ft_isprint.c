/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:00 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 15:45:21 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 48;
//     printf("%d", isprint(c));
//     printf("\n%d", ft_isprint(c));
// }