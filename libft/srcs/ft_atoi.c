/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:28:31 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/05 18:35:36 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	unsigned int a;
	unsigned int sum;
	unsigned int i;

	i = 0;
	a = 1;
	sum = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\a' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (str[i] - 48) + sum * 10;
		i++;
	}
	return (a * sum);
}
