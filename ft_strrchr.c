/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:13:09 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 16:04:26 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == ((char )c))
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     char s[] = "uaf";
//     int c = '9';
//     printf("%s", ft_strrchr(s, c));
//     char s1[] = "hnb";
//     int c1 = '9';
//     printf("\n%s", strrchr(s1, c1));
// }