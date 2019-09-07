/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:22:46 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/07 18:41:19 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptr2;
	size_t 	i;

	i = -1;
	ptr = (char *)src;
	ptr2 = (char *)dst;
	if (ptr < ptr2)
		while ((int)(--len) >= 0)
			*(ptr2 + len) = *(ptr + len);
	else
		while (++i < len)
			*(ptr2 + i) = *(ptr + i);
	return (dst);
}