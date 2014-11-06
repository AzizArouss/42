/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 16:50:51 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/24 18:05:18 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int		ft_atoi_l(char *str, int length)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	if (str)
	{
		while (*str != '\0' && *str >= '0' && *str <= '9')
		{
			nbr = *str - '0' + 10 * nbr;
			if (i == length)
				return (nbr);
			str++;
			i++;
		}
	}
	return (nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (str)
	{
		ft_putchar(*str);
		str++;
	}
}
