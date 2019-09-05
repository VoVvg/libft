/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:51:52 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/05 16:49:40 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0' && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
