/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parallel_formulas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 01:25:29 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/24 10:43:34 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		*parallel_routine(void *para)
{
	int			j;
	int			i;
	t_parallel	*params;

	params = (t_parallel *)para;
	i = params->i;
	while (i < params->i_end)
	{
		j = params->j;
		while (j < params->j_end)
		{
			params->FRAC.formula(params->env, i, j);
			j++;
		}
		i++;
	}
	return (NULL);
}

void		init_parallel_computing(t_env *env, t_parallel *params)
{
	(params[0]).env = env;
	(params[0]).i = 0;
	(params[0]).j = 0;
	(params[0]).i_end = H / 2;
	(params[0]).j_end = W / 2;
	(params[1]).env = env;
	(params[1]).i = H / 2;
	(params[1]).j = 0;
	(params[1]).i_end = H;
	(params[1]).j_end = W / 2;
	(params[2]).env = env;
	(params[2]).i = 0;
	(params[2]).j = W / 2;
	(params[2]).i_end = H / 2;
	(params[2]).j_end = W;
	(params[3]).env = env;
	(params[3]).i = H / 2;
	(params[3]).j = W / 2;
	(params[3]).i_end = H;
	(params[3]).j_end = W;
}

void		para_fractalize(t_env *env)
{
	static t_parallel	params[4];
	int					i;

	i = 0;
	init_parallel_computing(env, params);
	while (i < 4
		&& !pthread_create(&((env->para_thread)[i]), \
			NULL, parallel_routine, &(params[i])))
		i++;
	i = 0;
	while (i < 4)
	{
		pthread_join(env->para_thread[i], NULL);
		i++;
	}
}
