/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 09:55:53 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 09:56:32 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int	loop_hook(t_all *all)
{
	int	x;
	int	hit;

	if (all->re)
	{
		x = -1;
		while (x++ < WIN_WIDTH)
		{
			init_pos(all, x);
			hit = 0;
			step(all);
			search_wall(all, hit);
			camera(all);
			draw(all, x);
		}
		mlx_put_image_to_window(all->e.mlx, all->e.win, all->img.img, 0, 0);
		all->re = 0;
	}
	return (0);
}

int	key_hook(int keycode, t_all *all)
{
	if (keycode == 53)
	{
		mlx_destroy_image(all->e.mlx, all->img.img);
		free(all);
		exit(0);
	}
	return (0);
}

int	expose_hook(t_all *all)
{
	mlx_put_image_to_window(all->e.mlx, all->e.win, all->img.img, 0, 0);
	return (0);
}
