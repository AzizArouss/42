/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:43:40 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 17:35:47 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		res;

	i = 0;
	neg = 0;
	res = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = (str[i] == '-' ? 1 : 0);
		i++;
	}
	if (str[i] > '9' || str[i] < '0')
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = 10 * res + (char)str[i] - '0';
		i++;
	}
	return (neg == 1 ? -res : res);
}
