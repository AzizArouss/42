/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 09:56:13 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 09:56:35 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	init_map(t_all *all)
{
	int	x;
	int	y;

	x = 0;
	srand(time(NULL));
	while (x < MAPWIDTH)
	{
		y = 0;
		while (y < MAPHEIGHT)
		{
			if (((x == 0 || x == MAPWIDTH - 1 || y == 0 || y == MAPHEIGHT - 1)
					|| rand() % 100 > 70) && !((x == 12 && y == 12)))
				all->map[x][y] = 1;
			else
				all->map[x][y] = 0;
			y++;
		}
		x++;
	}
}
