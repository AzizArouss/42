/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 04:59:57 by cfernand          #+#    #+#             */
/*   Updated: 2015/05/21 09:24:14 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	get_flat_color(int keycode, int *base, int *dest)
{
	*dest = 0xffffff;
	if (keycode == 15)
		*base = 0xff0000;
	else if (keycode == 5)
		*base = 0x00ff00;
	else if (keycode == 11)
		*base = 0x0000ff;
	else if (keycode == 45)
		*base = 0x000000;
}

void	color_hooks(int keycode, t_env *env)
{
	static int	component = 0;

	if (keycode >= 18 && keycode <= 21)
		switch_fractal(keycode, env);
	else if (keycode == 35)
		init_psyche_colors(env);
	else if (keycode == 34)
		invert_colors(env);
	else if (keycode == 15 || keycode == 45 || keycode == 5 || keycode == 11)
	{
		get_flat_color(keycode, &(MENU.base), &(MENU.dest));
		init_colors(env, MENU.base, MENU.dest);
	}
	else if (keycode >= 6 && keycode <= 8)
		component = keycode - 6;
	else if ((keycode >= 6 && keycode <= 8)
		|| (keycode >= 123 && keycode <= 126))
	{
		manage_colors(keycode, &component, &(MENU.base), &(MENU.dest));
		init_colors(env, MENU.base, MENU.dest);
	}
}

int		menu_key_hook(int keycode, t_env *env)
{
	printf("key: %d\n", keycode);
	if (keycode == ESC)
	{
		mlx_destroy_image(env->p_mlx, FRAC.p_img);
		mlx_destroy_window(env->p_mlx, FRAC.p_win);
		exit(EXIT_SUCCESS);
	}
	color_hooks(keycode, env);
	expose_hook(env);
	menu_expose_hook(env);
	return (0);
}

int		menu_expose_hook(t_env *env)
{
	int				i;
	int				j;
	unsigned int	color;

	i = 0;
	j = 0;
	color = 0;
	mlx_put_image_to_window(env->p_mlx, MENU.p_win, MENU.p_img, 0, 0);
	mlx_string_put(env->p_mlx, MENU.p_win, 70, 20, 0x0381FF, MENU.str[0]);
	display_menu_strings(env, color, i, j);
	display_colors_components(env, MENU.base, MENU.dest);
	return (0);
}

void	init_menu(t_env *env)
{
	MENU.base = 0xffffff;
	MENU.dest = 0x000000;
	MENU.p_win = mlx_new_window(env->p_mlx, 542, 742, "Infos - Fract'ol");
	MENU.p_img = mlx_new_image(env->p_mlx, 542, 742);
	mlx_expose_hook(MENU.p_win, menu_expose_hook, env);
	mlx_key_hook(MENU.p_win, menu_key_hook, env);
	init_menu_strings(env);
	MENU.str[22] = "Arrows: Change colors";
	MENU.str[23] = "Z: Change RED component";
	MENU.str[24] = "X: Change GREEN component";
	MENU.str[25] = "C: Change BLUE component";
	MENU.str[26] = "LEFT / RIGHT: foreground -/+ <component>";
	MENU.str[27] = "UP / DOWN: background +/- <component>";
	MENU.str[28] = "Foreground red =";
	MENU.str[29] = "Foreground green =";
	MENU.str[30] = "Foreground blue =";
	MENU.str[31] = "Background red =";
	MENU.str[32] = "Background green =";
	MENU.str[33] = "Background blue =";
}
