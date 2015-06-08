/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operator_push.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 13:17:18 by aarouss           #+#    #+#             */
/*   Updated: 2015/06/08 13:17:52 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_operator_pa(t_env *env, int is_print)
{
	t_stack *elem;

	elem = NULL;
	if (!env || !(env->stack_b))
		return ;
	elem = ps_stack_pop(&(env->stack_b));
	ps_stack_push(&(env->stack_a), elem);
	if (is_print)
		ps_print_operation(env, "pa");
}

void	ps_operator_pb(t_env *env, int is_print)
{
	t_stack *elem;

	elem = NULL;
	if (!env || !(env->stack_a))
		return ;
	elem = ps_stack_pop(&(env->stack_a));
	ps_stack_push(&(env->stack_b), elem);
	if (is_print)
		ps_print_operation(env, "pb");
}
