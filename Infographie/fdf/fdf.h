/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:26:46 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/26 17:47:53 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H

# define WIDTGH (2550)
# define HEIGHT (1300)
# define SHIFT (5000
# define ABS(a) ((a <0) ? (-(a)) : (a))

# include <fctnl.h>
# include <mlx.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <X11/Xlib.h>
# include "fdf.h"
# include "get_next_line.h"
# include <string.h>

typedef struct		s_pt
{
	double			x;
	double			y;
	double			z;
	double			x_2d;
	double			y_2d;
}					t_pt;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	t_pt			**grid;
	char			*table;
	int				width;
	int				height;
	int				bpp;
	int				size;
	int				endian;
	int				z_min;
	int				z_max;
	double			zoom;
	int				y;
	int				r;
	int				g;
	int				b;
	int				p;
	int				c;
}					t_env;

void				*ft_xmalloc(size_t size);
void				ft_error(char *s);

void				ft_center(t_env *e, float x_shift, float y_shift,
															float 
