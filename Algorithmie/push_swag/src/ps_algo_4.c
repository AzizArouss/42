/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 13:17:12 by aarouss           #+#    #+#             */
/*   Updated: 2015/06/08 13:17:51 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ps_algo_optimize_three(t_env *env)
{
	if (env->stack_a->nbr == ps_min_stack(env->stack_a) &&
		env->stack_a->down->nbr == ps_max_stack(env->stack_a))
		ps_operator_sa(env, 1), ps_operator_ra(env, 1);
	else if (env->stack_a->nbr == ps_stack_mid(env->stack_a) &&
			env->stack_a->down->nbr == ps_min_stack(env->stack_a))
		ps_operator_sa(env, 1);
	else if (env->stack_a->nbr == ps_stack_mid(env->stack_a) &&
			env->stack_a->down->nbr == ps_max_stack(env->stack_a))
		ps_operator_rra(env, 1);
	else if (env->stack_a->nbr == ps_max_stack(env->stack_a) &&
			env->stack_a->down->nbr == ps_min_stack(env->stack_a))
		ps_operator_ra(env, 1);
	else if (env->stack_a->nbr == ps_max_stack(env->stack_a) &&
			env->stack_a->down->nbr == ps_stack_mid(env->stack_a))
		ps_operator_sa(env, 1), ps_operator_rra(env, 1);
}

void		ps_algo_optimize_five(t_env *env, int size)
{
	ps_push_nb(env, size, ps_stack_mid(env->stack_a));
	ps_algo_optimize_three(env);
	ps_operator_pa(env, 1);
	ps_operator_pa(env, 1);
}
