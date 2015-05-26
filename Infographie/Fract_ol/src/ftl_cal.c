/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftl_cal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:43:24 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:44:03 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftl.h"

void	ftl_cal_apply(t_env *e, t_fractal *ftl,
		int (*f)(t_env*, t_fractal, t_point*))
{
	t_point	point;
	int		color_pix;

	point.y = 0;
	while (point.y < e->win_size_h)
	{
		point.x = 0;
		while (point.x < e->win_size_w)
		{
			color_pix = (*f)(e, *ftl, &point);
			ftl_draw_pixel_img(&(point), e, color_pix);
			++point.x;
		}
		++point.y;
	}
}
