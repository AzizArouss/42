/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftl_fractal_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:43:44 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:44:06 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftl.h"

int		ftl_fractal_carpet(t_env *e, t_fractal ftl, t_point *point)
{
	int x;
	int y;

	(void)ftl;
	x = point->x;
	y = point->y;
	while (x > 0 || y > 0)
	{
		if (x % 3 == 1 && y % 3 == 1)
			return (ftl_get_color(0, *(e->p_color_ptr)));
		y /= 3;
		x /= 3;
	}
	return (ftl_get_color(100, *(e->p_color_ptr)));
}
