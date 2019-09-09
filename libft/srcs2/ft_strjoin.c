/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:21:04 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/09 11:28:01 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	size;

	if (s1 && s2)
		size = (size_t)(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	else if (s1)
		size = (size_t)(ft_strlen((char *)s1));
	else if (s2)
		size = (size_t)(ft_strlen((char *)s2));
	else
		return (NULL);
	if (!(res = ft_memalloc(size)))
		return (NULL);
	if (s1)
		res = ft_strcpy(res, (char *)s1);
	else
		res = ft_strcpy(res, (char *)s2);
	if (s1 && s2)
		res = ft_strcat(res, (char *)s2);
	return (res);
}
