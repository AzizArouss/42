/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 08:01:26 by aarouss           #+#    #+#             */
/*   Updated: 2015/03/10 08:01:42 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_error(char *s)
{
	ft_putendl_fd(s, 2);
	exit(1);
}

int		shoot(int button, int x, int y, t_env *e)
{
	if (button == 1)
	{
		e->draw.x = x;
		init_draw(e);
		calc_steps_and_side_dist(e);
		while (e->draw.hit == 0)
		{
			to_next_square(e);
			if (e->world_map[e->draw.mapx][e->draw.mapy] > 0)
				e->draw.hit = 1;
		}
		calc_wall_dist(e);
		calc_line_height(e);
		if (e->world_map[e->draw.mapx][e->draw.mapy] > 2
					&& e->draw.draw_start < y && e->draw.draw_end > y)
			e->world_map[e->draw.mapx][e->draw.mapy] = 0;
		ft_draw(e);
	}
	return (0);
}

int		main(void)
{
	t_env	e;

	init_env(&e);
	fill_steve(&(e.s));
	e.mlx = mlx_init();
	init_map(&e);
	e.win = mlx_new_window(e.mlx, WIN_WIDTH, WIN_HEIGHT, "Wolf3D");
	mlx_hook(e.win, KeyPress, KeyPressMask, &key_hook, &e);
	mlx_hook(e.win, KeyRelease, KeyReleaseMask, &key_hook_r, &e);
	mlx_mouse_hook(e.win, &shoot, &e);
	mlx_loop_hook(e.mlx, &loop_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
