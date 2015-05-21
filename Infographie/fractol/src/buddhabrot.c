/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buddhabrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 01:10:50 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/18 04:15:59 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		**init_buddha_colors(t_env *env)
{
	int		**color;
	int		i;

	if ((color = malloc(sizeof(int *) * H)) == NULL)
		return (NULL);
	i = 0;
	while (i < H)
	{
		if ((color[i] = malloc(sizeof(int) * W)) == NULL)
			return (NULL);
		ft_bzero(color[i], W);
		i++;
	}
	return (color);
}

void	add_buddha_color(t_env *env, double re, double im)
{
	int		x;
	int		y;

	x = re + DISP.shift_x / DISP.step;
	y = im + DISP.shift_y / DISP.step;
	if (x < W && x > 0 && y < H && y > 0)
	{
		return ;
	}
}

void	buddhabrot(t_env *env, int i, int j)
{
	static t_complex	z;
	static t_complex	c;
	static t_complex	sqz;
	static int			iter;

	iter = DISP.max_iter;
	z.re = 0;
	z.im = 0;
	c.re = DISP.step * j - DISP.shift_x;
	c.im = DISP.step * i - DISP.shift_y;
	sqz.re = 0;
	sqz.im = 0;
	while (sqz.re + sqz.im <= 4 && --iter > 0)
	{
		add_buddha_color(env, z.re, z.im);
		sqz.re = z.re * z.re;
		sqz.im = z.im * z.im;
		z.im = 2 * z.re * z.im + c.im;
		z.re = sqz.re - sqz.im + c.re;
	}
}
