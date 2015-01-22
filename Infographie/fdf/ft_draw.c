/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 16:25:37 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/22 16:53:03 by aarouss          ###   ########.fr       */
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

