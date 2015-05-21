/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_px_put_img.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 21:34:25 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/22 21:35:40 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mlx_pixel_put_img(t_frac *frac, int x, int y, unsigned int color)
{
	static int		i;

	i = x * (frac->bpp / 8) + y * frac->size_line;
	frac->data[i] = color;
	frac->data[i + 1] = color >> 8;
	frac->data[i + 2] = color >> 16;
}
