/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 10:59:06 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 11:01:47 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	manage_colors(int keycode, int *component, int *base, int *dest)
{
	static int		base_rgb[3];
	static int		dest_rgb[3];

	base_rgb[0] = ((*base >> 16) & 0xFF);
	base_rgb[1] = ((*base >> 8) & 0xFF);
	base_rgb[2] = ((*base) & 0xFF);
	dest_rgb[0] = ((*dest >> 16) & 0xFF);
	dest_rgb[1] = ((*dest >> 8) & 0xFF);
	dest_rgb[2] = ((*dest) & 0xFF);
	if (keycode == 124)
		base_rgb[*component] += 5 % 0xff;
	else if (keycode == 123 && base_rgb[*component] > 5)
		base_rgb[*component] -= 5 & 0xff;
	if (keycode == 126)
		dest_rgb[*component] += 5 % 0xff;
	else if (keycode == 125 && dest_rgb[*component] > 5)
		dest_rgb[*component] -= 5 % 0xff;
	*base = (base_rgb[0] & 0xff) << 16 | (base_rgb[1] & 0xff) << 8
		| (base_rgb[2] & 0xff);
	*dest = (dest_rgb[0] & 0xff) << 16 | (dest_rgb[1] & 0xff) << 8
		| (dest_rgb[2] & 0xff);
}

void			extract_rgb(int base, int dest, t_rgb *b_rgb, t_rgb *d_rgb)
{
	b_rgb->r = ((base >> 16) & 0xFF);
	b_rgb->g = ((base >> 8) & 0xFF);
	b_rgb->b = ((base) & 0xFF);
	d_rgb->r = ((dest >> 16) & 0xFF);
	d_rgb->g = ((dest >> 8) & 0xFF);
	d_rgb->b = ((dest) & 0xFF);
}

void			display_colors_components(t_env *env, int base, int dest)
{
	char	*line;
	t_rgb	dest_rgb;
	t_rgb	base_rgb;

	extract_rgb(base, dest, &base_rgb, &dest_rgb);
	line = ft_itoa(base_rgb.r);
	mlx_string_put(env->p_mlx, MENU.p_win, 200, 610, 0xff0000, line);
	free(line);
	line = ft_itoa(base_rgb.g);
	mlx_string_put(env->p_mlx, MENU.p_win, 220, 630, 0x00ff00, line);
	free(line);
	line = ft_itoa(base_rgb.b);
	mlx_string_put(env->p_mlx, MENU.p_win, 210, 650, 0x0000ff, line);
	free(line);
	line = ft_itoa(dest_rgb.r);
	mlx_string_put(env->p_mlx, MENU.p_win, 200, 670, 0xff0000, line);
	free(line);
	line = ft_itoa(dest_rgb.g);
	mlx_string_put(env->p_mlx, MENU.p_win, 220, 690, 0x00ff00, line);
	free(line);
	line = ft_itoa(dest_rgb.b);
	mlx_string_put(env->p_mlx, MENU.p_win, 210, 710, 0x0000ff, line);
	free(line);
}

void	display_menu_strings(t_env *env, unsigned int color, int i, int j)
{
	i = 0;
	while (i < 28)
	{
		color = (i == 1 || i == 15 || i == 22) ? 0x37f51d : 0xCCCCCC;
		j = (i == 1 || i == 15 || i == 22) ? 0 : 20;
		if (i == 11)
			color = (env->parallel == 1) ? 0xFC1750 : 0xCCCCCC;
		mlx_string_put(env->p_mlx, MENU.p_win, 30 + j, 40 + i * 20, \
				color, MENU.str[i]);
		i++;
	}
	while (i < 34)
	{
		if (i % 3 == 0)
			color = 0x0381ff;
		else if (i % 3 == 1)
			color = 0xFC1750;
		else if (i % 3 == 2)
			color = 0x37f51d;
		mlx_string_put(env->p_mlx, MENU.p_win, 30, \
				742 - 135 + (i - 28) * 20, color, MENU.str[i]);
		i++;
	}
}
