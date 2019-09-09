/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:17:07 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/09 11:19:24 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char res;

	if (!s || !(res = ft_memalloc(len + 1)))
		return (NULL);
	res = ft_strncpy(res, (char *)s + start, len);
	return (res);
}
