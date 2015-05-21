/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 10:50:52 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 10:53:01 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_STRUCT_H
# define FRACTOL_STRUCT_H

# include <pthread.h>

typedef struct		s_complex
{
	double		im;
	double		re;
}					t_complex;

typedef struct		s_rgb
{
	int			r;
	int			g;
	int			b;
}					t_rgb;

typedef struct		s_frac
{
	void		*p_win;
	void		*p_img;
	void		(*formula)(void *, int, int);
	char		*data;
	int			bpp;
	int			size_line;
	int			endian;
}					t_frac;

typedef struct		s_menu
{
	void		*p_win;
	void		*p_img;
	char		*str[34];
	void		*formula[10];
	int			dest;
	int			base;
}					t_menu;

typedef struct		s_display
{
	int			height;
	int			width;
	double		shift_x;
	double		shift_y;
	double		x_old;
	double		y_old;
	double		step;
	double		view_range;
	int			mouse_x;
	int			mouse_y;
	char		mouse_update;
	int			colors[2000];
	int			max_iter;
	int			**buddha_colors;
}					t_display;

typedef struct		s_env
{
	t_display	disp;
	t_menu		menu;
	t_frac		frac;
	pthread_t	para_thread[4];
	int			parallel;
	void		*formulas[10];
	void		*p_mlx;
	void		*p_img[4];
}					t_env;

typedef struct		s_parallel
{
	t_env		*env;
	t_frac		frac;
	void		(*formula)(void *, int, int);
	int			i;
	int			j;
	int			i_end;
	int			j_end;
}					t_parallel;

#endif
