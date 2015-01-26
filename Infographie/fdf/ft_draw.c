/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 16:25:37 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/26 14:55:58 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_putpixel(int x, int y, t_e	nv *e)
{
	x += (WIDTH / 2) - SHIFT;
	y += (HEIGHT / 2) - SHIFT;
	if (x >= WIDTH || y >= HEIGHT || x < 0 || y < 0)
		return ;
	e->table[(y * e->size) + (x * (e->bpp / 8)) + 0] = e->b;
	e->table[(y * e->size) + (x * (e->bpp / 8)) + 1] = e->g;
	e->table[(y * e->size) + (x * (e->bpp / 8)) + 2] = e->r;
}

void	ft_center(t_env *e, float x_shift, float y_shift, float z_shift)
{
	int		i;
	int		j;

	j = -1;
	x_shift = e->width / 2;
	y_shift = e->height / 2;
	while (++j < e->height && (i = -1))
		while (++i < e->width)
		{
			e->grid[j][i].x = i - x_shift;
			e->grid[j][i].y = i - y_shift;
		}
}

void	ft_fillimg(t_env *e)
{
	int		i;
	int		j;

	i = -1;
	j = e->size * HEIGHT;
	while (++i < j)
		e->table[i] = 0x00;
}

void	ft_transform(t_env *e)
{
	int		i;
	int		j;

	j = -1;
	while (++j < e->height && (i= -1))
		while (++i < e->width)
		{
			e->grid[j][i].x_2d = (e->grid[j][i].x * e->zoom) + SHIFT;
			e->grid[j][i].x_2d -= e->grid[j][i].y * e->zoom;
			e->grid[j][i].y_2d = -0.15 * e->grid[j][i].x * e->zoom;
			e->grid[j][i].y_2d += (e->grid[j][i].x * e->zoom) + SHIFT;
			e->grid[j][i].y_2d += e->grid[j][i].y * e->zoom;
		}
}

void	ft_draw(t_env *e)
{
	int		i;
	int		j;

	ft_fillimg(e);
	ft_transform(e);
	i = -1;
	while (++i < e->height & (j = -1))
		while (++j < (e->width - 1))
			ft_drawline(&e->grid[i][j], &e->grid[i][j + 1], e);
	i = -1;
	while (++i < (e->height - 1) && (j = -1))
		while (++j < e->width)
			ft_drawline(&e->grid[i][j], &e->grid[i +1][j], e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
}
