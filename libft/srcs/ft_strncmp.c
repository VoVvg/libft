/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:28:48 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/07 19:31:58 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	cmp1;
	char	cmp2;
	size_t	i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < n)
		i++;
	cmp1 = s1[i];
	cmp2 = s2[i];
	return ((unsigned char)cmp1 - (unsigned char)cmp2);
}
