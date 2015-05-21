/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 03:42:31 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 11:01:24 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		init_mlx(t_env *env, char *av[])
{
	if ((env->p_mlx = mlx_init()) == NULL)
	{
		ft_putstr_fd("[-] Only n00bs get caught by env -i.\n", 2);
		ft_putstr_fd("[+] Nice try though ;)\n", 2);
		exit(EXIT_FAILURE);
	}
	FRAC.p_win = mlx_new_window(env->p_mlx, DISP.width, DISP.height, av[1]);
	mlx_key_hook(FRAC.p_win, key_hook, env);
	mlx_mouse_hook(FRAC.p_win, mouse_hook, env);
	mlx_expose_hook(FRAC.p_win, expose_hook, env);
	mlx_hook(FRAC.p_win, 6, (1L << 6), update_mouse_hook, env);
}

static void		*choose_good_formula(char *av[])
{
	if (ft_strcmp(av[1], "mandelbrot") == 0)
		return (mandelbrot);
	else if (ft_strcmp(av[1], "julia") == 0)
		return (julia);
	else if (ft_strcmp(av[1], "burning_ship") == 0)
		return (burning_ship);
	else if (ft_strcmp(av[1], "batman") == 0)
		return (batman);
	return (NULL);
}

void	init_menu_strings(t_env *env)
{
	MENU.str[0] = "FRACT'OL: A Beatiful fractal explorer";
	MENU.str[1] = "Available keys: ";
	MENU.str[2] = "W: Move up / S: Move down";
	MENU.str[3] = "A: Move left / D: Move right";
	MENU.str[4] = "+: Increase iterations / -: Decrease iterations";
	MENU.str[5] = "P: Psychedelic mode";
	MENU.str[6] = "B: Black & white mode";
	MENU.str[7] = "R: Red to black gradient";
	MENU.str[8] = "G: Green to black gradient";
	MENU.str[9] = "B: Blue to black gradient";
	MENU.str[10] = "I: Invert colors";
	MENU.str[11] = "ENTER: Toggle parallel computing";
	MENU.str[12] = "BACKSPACE (<-): Reset image";
	MENU.str[13] = "SPACE: Toggle mouse tracking (Julia / Batman)";
	MENU.str[14] = "ESC: Close current fractal";
	MENU.str[15] = "Available fractals: ";
	MENU.str[16] = "1: Mandelbrot";
	MENU.str[17] = "2: Julia (2 orbits)";
	MENU.str[18] = "3: Batman";
	MENU.str[19] = "4: Burning Ship";
	MENU.str[20] = "5: Newton with 4 basins";
	MENU.str[21] = "6: Sierpinski carpet";
}

static void		init_formulas(t_env *env)
{
	env->formulas[0] = mandelbrot;
	env->formulas[1] = julia;
	env->formulas[2] = batman;
	env->formulas[3] = burning_ship;
	env->formulas[4] = NULL;
	env->formulas[5] = NULL;
	env->formulas[6] = NULL;
	env->formulas[7] = NULL;
	env->formulas[8] = NULL;
	env->formulas[9] = NULL;
}

void			init_x_env(t_env *env, char *av[])
{
	DISP.width = 1000;
	DISP.height = 1000;
	init_mlx(env, av);
	init_menu(env);
	DISP.view_range = 4.0;
	DISP.mouse_x = W / 2;
	DISP.mouse_y = H / 2;
	DISP.shift_y = 2.0;
	DISP.shift_x = 2.0;
	DISP.x_old = 2.0;
	DISP.y_old = 2.0;
	DISP.max_iter = 50;
	DISP.mouse_update = 1;
	init_colors(env, 0xffffff, 0x000000);
	init_formulas(env);
	FRAC.p_img = mlx_new_image(env->p_mlx, DISP.width, DISP.height);
	FRAC.data = mlx_get_data_addr(FRAC.p_img, &(FRAC.bpp), \
			&(FRAC.size_line), &(FRAC.endian));
	if ((FRAC.formula = choose_good_formula(av)) == NULL)
		exit(EXIT_FAILURE);
}
