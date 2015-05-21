/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 07:11:05 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/23 07:12:29 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	manage_iter(t_env *env, int keycode)
{
	if (keycode == 27 && DISP.max_iter <= 10)
		return ;
	else if (keycode == 27 && DISP.max_iter > 10)
		DISP.max_iter -= 10;
	if (keycode == 24)
		DISP.max_iter += 10;
}

void	zoom_dezoom(t_env *env, int button, int x, int y)
{
	double	scale;

	scale = DISP.view_range / 10;
	DISP.view_range += (button == 2 || button == 5) ? scale : -scale;
	DISP.shift_x += (button == 2 || button == 5)
		? (scale * x / W) : -(scale * x / W);
	DISP.shift_y += (button == 2 || button == 5)
		? (scale * y / H) : -(scale * y / H);
	DISP.x_old += (button == 2 || button == 5)
		? (scale * DISP.mouse_x / W) : -(scale * DISP.mouse_x / W);
	DISP.y_old += (button == 2 || button == 5)
		? (scale * DISP.mouse_y / H) : -(scale * DISP.mouse_y / H);
	if ((button == 2 || button == 5) && DISP.max_iter > 10)
		DISP.max_iter -= 5;
	else if (button == 1 || button == 4)
		DISP.max_iter += 5;
}
