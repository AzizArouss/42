/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 09:55:45 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 09:56:31 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_put_pixel(t_img *img, int x, int y)
{
	if ((x >= 0 && x <= WIN_WIDTH) && (y >= 0 && y <= WIN_HEIGHT))
		ft_memcpy(&img->data[x * 4 + y * img->size_line],
			&img->color, (size_t)(sizeof(int)));
}

void	color(t_all *all, t_stuff *stuff, int x)
{
	stuff->y = -1;
	all->img.color = 0x00FFFF;
	while (++stuff->y < stuff->draw_start)
		ft_put_pixel(&all->img, x, stuff->y);
	stuff->y = stuff->draw_start - 1;
	if (all->self.side == 1)
		all->img.color = 0xFF0000;
	else if (all->self.side == 2)
		all->img.color = 0x0044FF;
	else if (all->self.side == 3)
		all->img.color = 0x00FF00;
	else if (all->self.side == 0)
		all->img.color = 0xFFFF00;
	while (++stuff->y < stuff->draw_end)
		ft_put_pixel(&all->img, x, stuff->y);
	all->img.color = 0x54391F;
	while (++stuff->y < WIN_HEIGHT)
		ft_put_pixel(&all->img, x, stuff->y - 1);
}

void	draw(t_all *all, int x)
{
	t_stuff stuff;

	stuff.line_height = abs((int)(WIN_HEIGHT / all->self.perp_wall_dist));
	stuff.draw_start = -stuff.line_height / 2 + WIN_HEIGHT / 2;
	stuff.draw_end = stuff.line_height / 2 + WIN_HEIGHT / 2;
	if (stuff.draw_start < 0)
		stuff.draw_start = 0;
	if (stuff.draw_end >= WIN_HEIGHT)
		stuff.draw_end = WIN_HEIGHT - 1;
	color(all, &stuff, x);
}
