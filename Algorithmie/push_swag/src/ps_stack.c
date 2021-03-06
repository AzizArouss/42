/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 13:17:34 by aarouss           #+#    #+#             */
/*   Updated: 2015/06/08 13:17:55 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_push(t_stack **stack, t_stack *elem)
{
	if (!stack || !elem)
		return ;
	elem->down = *stack;
	*stack = elem;
}

t_stack	*ps_stack_pop(t_stack **stack)
{
	t_stack *elem;

	if (!stack || !(*stack))
		return (NULL);
	elem = *stack;
	*stack = (*stack)->down;
	return (elem);
}

int		ps_stack_size(t_stack *stack)
{
	int count;

	count = 0;
	while (stack)
		stack = stack->down, ++count;
	return (count);
}

t_stack	*ps_stack_peek(t_stack **stack)
{
	if (!stack || !(*stack))
		return (NULL);
	return (*stack);
}

void	ps_stack_swap_top(t_stack **stack)
{
	t_stack *ptr_tmp;

	if (!stack || !(*stack))
		return ;
	ptr_tmp = (*stack)->down;
	(*stack)->down = (*stack)->down->down;
	ptr_tmp->down = *stack;
	*stack = ptr_tmp;
}
