/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_fractal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 17:55:06 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/23 07:25:32 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	switch_fractal(int keycode, t_env *env)
{
	reset_env(env);
	if (keycode == 18)
		FRAC.formula = env->formulas[0];
	else if (keycode == 19)
		FRAC.formula = env->formulas[1];
	else if (keycode == 20)
		FRAC.formula = env->formulas[2];
	else if (keycode == 21)
		FRAC.formula = env->formulas[3];
}
