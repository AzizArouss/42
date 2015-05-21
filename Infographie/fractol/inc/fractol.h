/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 10:46:18 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 11:04:43 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft.h"
# include "mlx.h"
# include "fractol_struct.h"
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

# define W				env->disp.width
# define H				env->disp.height
# define FORMULA(y,x)	env->frac.formula(env, y, x)
# define DISP			env->disp
# define FRAC			env->frac
# define MENU			env->menu

/*
**	Native Mac OSX minilibx keycodes
*/

# define ESC			53
# define SPACE			49
# define BACKSP			51
# define ENTER			36

/*
**	formulas.c: different mathematics formulas for different fractals
*/

void		mandelbrot(t_env *env, int i, int j);
void		julia(t_env *env, int i, int j);
void		burning_ship(t_env *env, int i, int j);
void		batman(t_env *env, int i, int j);

/*
**	buddhabrot.c: pretty straight forward
*/

int			**init_buddha_colors(t_env *env);

/*
**	main.c: main functions
*/

void		reset_env(t_env *env);

/*
**	hooks.c: mouse, key and expose callbacks
*/

int			mouse_hook(int button, int x, int y, t_env *env);
int			key_hook(int keycode, t_env *env);
int			expose_hook(t_env *env);
int			update_mouse_hook(int x, int y, t_env *env);

/*
**	fractalize.c: apply formula to all screen pixels
*/

void		fractalize(t_env *env, void (*formula)(void *, int, int));

/*
**	colors.c: pretty colors
*/

void		display_colors_components(t_env *env, int base, int dest);
void		invert_colors(t_env *env);
int			iter_per(t_env *env, int iter);
void		init_colors(t_env *env, int base, int dest);
void		init_psyche_colors(t_env *env);

/*
**	settings.c: set environment
*/

void		init_menu_strings(t_env *env);
void		init_x_env(t_env *env, char *av[]);

/*
**	menu.c: create fake-menu displaying infos about the current fractals
*/

int			menu_key_hook(int keycode, t_env *env);
void		init_menu(t_env *env);
int			menu_expose_hook(t_env *env);

/*
**	switch_fractal.c: Switch fractal display during program execution
*/

void		switch_fractal(int keycode, t_env *env);

/*
**	mlx_px_put_img: write pixel to a mlx image
*/

void		mlx_pixel_put_img(t_frac *frac, int x, int y, unsigned int color);

/*
**	parallel_formulas.c: parallel computing
*/

void		init_parallel_images(t_env *env, t_parallel *params);
void		init_parallel_computing(t_env *env, t_parallel *params);
void		*parallel_routine(void *para);
void		para_fractalize(t_env *env);

/*
**	display.c: display functions
*/

void		manage_iter(t_env *env, int keycode);
void		zoom_dezoom(t_env *env, int button, int x, int y);

/*
**	extra_functions: fuck norme
*/

void		manage_colors(int keycode, int *component, int *base, int *dest);
void		extract_rgb(int base, int dest, t_rgb *b_rgb, t_rgb *d_rgb);
void		display_colors_components(t_env *env, int base, int dest);
void		display_menu_strings(t_env *env, unsigned int color, int i, int j);

#endif
