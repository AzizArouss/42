/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:43:58 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:44:00 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftl.h"

static int		ftl_expose_hook(t_env *e)
{
	ftl_draw_reload(e);
	return (0);
}

static void		ftl_error_usage(void)
{
	ft_error_str_exit("usage: fractol [mandelbrot, julia, carpet, \
b_ship, mandelbar]\n");
}

static void		ftl_check_params(int argc, char **argv)
{
	if (argc != 2)
		ftl_error_usage();
	if (ft_strcmp("mandelbrot", argv[1]) != 0 &&
		ft_strcmp("julia", argv[1]) != 0 &&
		ft_strcmp("carpet", argv[1]) != 0 &&
		ft_strcmp("b_ship", argv[1]) != 0 &&
		ft_strcmp("mandelbar", argv[1]) != 0)
		ftl_error_usage();
}

int				main(int argc, char **argv)
{
	t_env *e;

	ftl_check_params(argc, argv);
	if (!(e = (t_env*)malloc(sizeof(t_env))))
		ft_malloc_error();
	e->win_size_h = WINDOW_SIZE_H;
	e->win_size_w = WINDOW_SIZE_W;
	e->stop_motion = 1;
	ftl_draw_windows("42 Fractol", e);
	ftl_fractal_init(e);
	ftl_color_init(e);
	ftl_change_fractol(argv[1], e);
	mlx_expose_hook(e->win, ftl_expose_hook, e);
	mlx_mouse_hook(e->win, ftl_mouse_hook, e);
	mlx_hook(e->win, KEY_PRESS, KEY_PRESS_MASK, ftl_key_hook, e);
	mlx_hook(e->win, MOTION_NOTIFY, PTR_MOTION_MASK, ftl_motion_hook, e);
	mlx_loop(e->mlx);
	return (0);
}
