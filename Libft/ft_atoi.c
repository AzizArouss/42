/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:27:47 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/07 10:03:40 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nb;
	int		i;
	int		cond;

	nb = 0;
	i = 0;
	cond = 0;
	while ((str[i] >= 48 && str[i] <= 57) || str[0] == 43 || str[0] == 45)
	{
		if (str[0] == 45 || str[0] == 43)
		{
			if (str[0] == 45)
				cond = 1;
			i++;
		}
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	if (cond == 1)
		nb = -nb;
	return (nb);
}
