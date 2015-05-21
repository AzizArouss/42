/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formulas.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 01:49:16 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/23 07:09:17 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mandelbrot(t_env *env, int i, int j)
{
	t_complex		z;
	t_complex		c;
	t_complex		sqz;
	int				iter;
	unsigned int	color;

	iter = DISP.max_iter;
	z.re = 0;
	z.im = 0;
	c.re = DISP.step * j - DISP.shift_x;
	c.im = DISP.step * i - DISP.shift_y;
	sqz.re = 0;
	sqz.im = 0;
	while (sqz.re + sqz.im <= 4 && --iter > 0)
	{
		sqz.re = z.re * z.re;
		sqz.im = z.im * z.im;
		z.im = 2 * z.re * z.im + c.im;
		z.re = sqz.re - sqz.im + c.re;
	}
	color = mlx_get_color_value(env->p_mlx, DISP.colors[iter_per(env, iter)]);
	mlx_pixel_put_img(&(FRAC), j, i, color);
}

void	julia(t_env *env, int i, int j)
{
	t_complex		z;
	t_complex		c;
	t_complex		sqz;
	int				iter;
	unsigned int	color;

	iter = DISP.max_iter;
	c.re = DISP.mouse_x * DISP.step - DISP.x_old;
	c.im = DISP.mouse_y * DISP.step - DISP.y_old;
	z.re = DISP.step * j - DISP.shift_x;
	z.im = DISP.step * i - DISP.shift_y;
	sqz.re = z.re * z.re;
	sqz.im = z.im * z.im;
	while (sqz.re + sqz.im <= 4 && --iter > 0)
	{
		if (iter != DISP.max_iter - 1)
		{
			sqz.re = z.re * z.re;
			sqz.im = z.im * z.im;
		}
		z.im = 2 * z.re * z.im + c.im;
		z.re = sqz.re - sqz.im + c.re;
	}
	color = mlx_get_color_value(env->p_mlx, DISP.colors[iter_per(env, iter)]);
	mlx_pixel_put_img(&(FRAC), j, i, color);
}

void	burning_ship(t_env *env, int i, int j)
{
	t_complex		z;
	t_complex		c;
	t_complex		sqz;
	int				iter;
	unsigned int	color;

	iter = DISP.max_iter;
	z.re = 0;
	z.im = 0;
	c.re = DISP.step * j - DISP.shift_x;
	c.im = DISP.step * i - DISP.shift_y;
	sqz.re = 0;
	sqz.im = 0;
	while (sqz.re + sqz.im <= 4 && --iter > 0)
	{
		sqz.re = z.re * z.re;
		sqz.im = z.im * z.im;
		z.im = 2 * fabs(z.re) * fabs(z.im) + c.im;
		z.re = sqz.re - sqz.im + c.re;
	}
	color = mlx_get_color_value(env->p_mlx, DISP.colors[iter_per(env, iter)]);
	mlx_pixel_put_img(&(FRAC), j, i, color);
}

void	batman(t_env *env, int i, int j)
{
	t_complex		z;
	t_complex		c;
	t_complex		cuz;
	int				iter;
	unsigned int	color;

	iter = DISP.max_iter;
	c.re = DISP.mouse_x * DISP.step - DISP.x_old;
	c.im = DISP.mouse_y * DISP.step - DISP.y_old;
	z.re = DISP.step * j - DISP.shift_x;
	z.im = DISP.step * i - DISP.shift_y;
	cuz.re = z.re * z.re * z.re;
	cuz.im = z.im * z.im * z.im;
	while (z.re * z.re + z.im * z.im <= 4 && --iter > 0)
	{
		if (iter != DISP.max_iter - 1)
		{
			cuz.re = z.re * z.re * z.re;
			cuz.im = z.im * z.im * z.im;
		}
		z.re = cuz.re - 3 * z.re * z.im * z.im + c.re;
		z.im = (3 * z.re * z.re * z.im) - cuz.im + c.im;
	}
	color = mlx_get_color_value(env->p_mlx, DISP.colors[iter_per(env, iter)]);
	mlx_pixel_put_img(&(FRAC), j, i, color);
}
