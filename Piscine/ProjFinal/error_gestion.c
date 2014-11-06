/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_gestion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 16:49:07 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/24 18:05:21 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		gestion_error(char *buf, int lg, t_var symb)
{
	if (dtc_error(buf, lg, symb) || dtc_error_ligne(buf))
	{
		write(2, "map error\n", 10);
		return (-1);
	}
	return (0);
}

int		dtc_error(char *buf, int lg, t_var symb)
{
	int		i;
	int		tmp;
	int		rt_ligne;

	i = 0;
	tmp = 0;
	rt_ligne = 0;
	while (buf[i])
	{
		if (buf[i] == symb.empty)
			tmp = 1;
		else if (buf[i] != symb.obst || buf[i] != '\n')
			return (0);
		if (buf[i] == '\n')
			rt_ligne++;
		i++;
	}
	if ((buf[i] && tmp != 1) || (rt_ligne != lg))
		return (0);
	return (1);
}

int		dtc_error_ligne(char *buf)
{
	int i;
	int count;
	int temp;

	i = 0;
	temp = 0;
	while (buf[i])
	{
		count = 0;
		while (buf[i] != '\n')
		{
			i++;
			count++;
		}
		if (temp == 0)
			temp = count;
		else if (temp != count)
			return (0);
	}
	return (1);
}
