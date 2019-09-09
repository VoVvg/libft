/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 22:59:31 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/09 09:45:23 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (!(mem - malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
