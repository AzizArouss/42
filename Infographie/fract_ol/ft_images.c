/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_images.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 10:15:14 by aarouss           #+#    #+#             */
/*   Updated: 2015/02/10 15:55:03 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_color	ft_get_color(char r, char g, char b)
{
	t_color c;

	c.rgb[3] = 0;
	c.rgb[2] = r;
	c.rgb[1] = g;
	c.rgb[0] = b;
	return (c);
}

void	ft_put_pixel(t_buffer *buffer, int x, int y, t_color color)
{
	int		octet;
	char	*position;

	octet = buffer->line_size / WIN_WIDTH;
	if (y > 0)
		y -= 1;
	position = buffer->data + (buffer->line_size * y) + (x * octet);
	*(position) = color.rgb[0];
	*(position + 1) = color.rgb[1];
	*(position + 2) = color.rgb[2];
}

void	ft_setinit(t_env *e)
{
	e->init.real = e->center.real - WIN_HEIGHT / 2 * e->steps.real;
	e->init.imag = e->center.imag - WIN_WIDTH / 2 * e->steps.imag;
}
