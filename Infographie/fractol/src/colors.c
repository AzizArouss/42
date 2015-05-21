/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 01:49:13 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 11:02:23 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

unsigned int	get_gradient_color(t_env *env, int base, int dest, int percent)
{
	t_rgb	curr_rgb;
	t_rgb	base_rgb;
	t_rgb	dest_rgb;
	int		color;

	(void)env;
	base_rgb.r = ((base >> 16) & 0xFF);
	base_rgb.g = ((base >> 8) & 0xFF);
	base_rgb.b = ((base) & 0xFF);
	dest_rgb.r = ((dest >> 16) & 0xFF);
	dest_rgb.g = ((dest >> 8) & 0xFF);
	dest_rgb.b = ((dest) & 0xFF);
	curr_rgb.r = base_rgb.r + (percent / 100.0) * (dest_rgb.r - base_rgb.r);
	curr_rgb.g = base_rgb.g + (percent / 100.0) * (dest_rgb.g - base_rgb.g);
	curr_rgb.b = base_rgb.b + (percent / 100.0) * (dest_rgb.b - base_rgb.b);
	color = ((unsigned int)curr_rgb.r & 0xff) << 16
		| ((unsigned int)curr_rgb.g & 0xff) << 8
		| ((unsigned int)curr_rgb.b & 0xff);
	return (color);
}

int				iter_per(t_env *env, int iter)
{
	static double	percent;
	static int		iter_index;

	percent = (double)iter / DISP.max_iter;
	iter_index = percent * 2000;
	return (iter_index);
}

void			invert_colors(t_env *env)
{
	int		*tab;
	int		temp;
	int		i;
	int		j;

	i = 0;
	j = 1999;
	tab = DISP.colors;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

void			init_colors(t_env *env, int base, int dest)
{
	int		*tab;
	int		i;
	int		percent;

	tab = DISP.colors;
	i = 0;
	tab[i++] = base;
	while (i < 2000)
	{
		percent = (double)i / 2000 * 100;
		tab[i] = get_gradient_color(env, base, dest, percent);
		i++;
	}
}

void			init_psyche_colors(t_env *env)
{
	int		i;
	int		*tab;
	int		percent;

	tab = DISP.colors;
	i = 0;
	tab[i++] = 0x000000;
	while (i < 2000)
	{
		percent = (double)i / 2000 * 100;
		tab[i] = get_gradient_color(env, i * 42424242 % 0xffffff, \
			24242424 * i % 0xffffff, percent);
		i++;
	}
}
