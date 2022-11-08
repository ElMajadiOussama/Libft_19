/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:13:16 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 17:11:32 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (start > (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if ((size_t)ft_strlen((char *)s + start) < len)
len = ft_strlen((char *)s + start);
result = malloc (sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
// #include <stdio.h>
// int main()
// {
//     char* str;

//     str = ft_substr("Hello, 42bal!", 7, 2);
//     printf("%s\n", str);

//     return 0;
// }
