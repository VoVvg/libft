/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:25:51 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/05 20:18:46 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int pos;

	pos = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[pos] != '\0')
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (haystack[pos + i] == needle[i] && needle[i] != '\0')
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (0);
}
