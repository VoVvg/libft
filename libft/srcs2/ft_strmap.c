/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:01:59 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/09 11:04:50 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ptr;
	char *ptr2;
	char *res;

	if (!s || !(res = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	ptr = (char *)s;
	ptr2 = res;
	while (*ptr)
		*(ptr2++) = f(*(ptr++));
	return (res);
}
