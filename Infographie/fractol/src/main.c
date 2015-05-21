/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 01:49:02 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/23 09:50:02 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		check_arguments(int ac, char *av[])
{
	if (ac != 2)
	{
		ft_putstr_fd("[-] Invalid arguments.\n\tUsage: ", 2);
		ft_putstr_fd("./fractol [mandelbrot] || [julia] || [buddhabrot]", 2);
		ft_putstr_fd(" || [batman] || [burning_ship]\n", 2);
		exit(EXIT_FAILURE);
	}
	if (ft_strcmp(av[1], "mandelbrot") && ft_strcmp(av[1], "julia")
			&& ft_strcmp(av[1], "buddhabrot")
			&& ft_strcmp(av[1], "burning_ship")
			&& ft_strcmp(av[1], "batman")
			&& ft_strcmp(av[1], "newton")
			&& ft_strcmp(av[1], "buddhabrot"))
		check_arguments(0, 0);
}

void			reset_env(t_env *env)
{
	DISP.view_range = 4.0;
	DISP.mouse_x = W / 2;
	DISP.mouse_y = H / 2;
	DISP.shift_y = 2.0;
	DISP.shift_x = 2.0;
	DISP.x_old = 2.0;
	DISP.y_old = 2.0;
	DISP.max_iter = 50;
	DISP.mouse_update = 1;
}

int				main(int ac, char *av[])
{
	t_env	env;

	env.parallel = 1;
	check_arguments(ac, av);
	init_x_env(&env, av);
	mlx_loop(env.p_mlx);
	return (0);
}
