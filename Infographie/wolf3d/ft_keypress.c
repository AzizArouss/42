/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keypress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 08:01:10 by aarouss           #+#    #+#             */
/*   Updated: 2015/03/10 08:01:38 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int	loop_hook(t_env *e)
{
	if (e->img != NULL)
		mlx_destroy_image(e->mlx, e->img);
	ft_draw(e);
	return (1);
}

int	key_hook(int keycode, t_env *e)
{
	if (keycode == 65362 || keycode == 119)
		e->inputs.up = 1;
	if (keycode == 65364 || keycode == 115)
		e->inputs.down = 1;
	if (keycode == 65363 || keycode == 100)
		e->inputs.right = 1;
	if (keycode == 65361 || keycode == 97)
		e->inputs.left = 1;
	return (1);
}

int	key_hook_r(int keycode, t_env *e)
{
	if (keycode == 65307)
		exit(0);
	if (keycode == 65362 || keycode == 119)
		e->inputs.up = 0;
	if (keycode == 65364 || keycode == 115)
		e->inputs.down = 0;
	if (keycode == 65363 || keycode == 100)
		e->inputs.right = 0;
	if (keycode == 65361 || keycode == 97)
		e->inputs.left = 0;
	return (1);
}
