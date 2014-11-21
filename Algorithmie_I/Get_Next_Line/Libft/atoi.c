/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:06:22 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 16:46:23 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	i += (str[i] == '+' || str[i] == '-') ? 1 : 0;
	if (str[i] && ft_isdigit(str[i]) != 0)
	{
		result = str[i] - 48;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]) != 0)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
