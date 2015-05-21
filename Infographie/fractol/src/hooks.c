/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 04:10:51 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 10:22:33 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mouse_hook(int button, int x, int y, t_env *env)
{
	if (button == 1 || button == 2 || button == 4 || button == 5)
		zoom_dezoom(env, button, x, y);
	expose_hook(env);
	return (0);
}

int		key_hook(int keycode, t_env *env)
{
	if (keycode == ESC)
	{
		mlx_destroy_image(env->p_mlx, FRAC.p_img);
		mlx_destroy_window(env->p_mlx, FRAC.p_win);
		exit(EXIT_SUCCESS);
	}
	else if (keycode == 24 || keycode == 27)
		manage_iter(env, keycode);
	else if (keycode == 0 || keycode == 2)
		DISP.shift_x += (keycode == 2) ? DISP.view_range / 10
			: -DISP.view_range / 10;
	else if (keycode == 13 || keycode == 1)
		DISP.shift_y += (keycode == 1) ? DISP.view_range / 10
			: -DISP.view_range / 10;
	else if (keycode == SPACE)
		DISP.mouse_update ^= 1;
	else if (keycode == BACKSP)
		reset_env(env);
	else if (keycode == ENTER)
		env->parallel ^= 1;
	expose_hook(env);
	menu_key_hook(keycode, env);
	return (0);
}

int		expose_hook(t_env *env)
{
	int		i;

	i = 0;
	fractalize(env, env->frac.formula);
	mlx_put_image_to_window(env->p_mlx, FRAC.p_win, FRAC.p_img, 0, 0);
	return (0);
}

int		update_mouse_hook(int x, int y, t_env *env)
{
	if (DISP.mouse_update == 0 || x & 1 || y & 1)
		return (-1);
	DISP.mouse_x = (x < W) ? x : W / 2;
	DISP.mouse_y = (y < H) ? y : H / 2;
	expose_hook(env);
	return (0);
}
