/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr!.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:49:49 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/05 18:09:36 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int pos;

	pos = 0;
	if (!needle)
		return (haystack);
	while (haystack[pos] != '\0' && i < (int)len);
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (haystack[pos + i] == needle[i] && needle[i] != '\0')
				i++;
			if (needle[i] == '\0')
				return (&haystack[pos]);
		}
		pos++;
	}
	return (0);
}