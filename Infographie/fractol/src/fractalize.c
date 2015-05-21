/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractalize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 01:54:59 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/23 07:16:11 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		fractalize(t_env *env, void (*formula)(void *, int, int))
{
	int				i;
	int				j;

	DISP.step = ((double)DISP.view_range) / DISP.width;
	i = 0;
	if (env->parallel == 0)
	{
		while (i < H)
		{
			j = 0;
			while (j < W)
			{
				formula(env, i, j);
				j++;
			}
			i++;
		}
	}
	else
		para_fractalize(env);
}
