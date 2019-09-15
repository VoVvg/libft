/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:08:59 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/15 18:29:03 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_numlen(int n)
{
	int len;
	int	minus;

	minus = n;
	len = 1;
	while ((n /= 10))
		len++;
	return (minus < 0 ? (1 + len) : (len));
}
