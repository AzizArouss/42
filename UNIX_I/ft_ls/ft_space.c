/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 14:49:38 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/15 18:20:42 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_add_space_endl(char *str)
{
	ft_putchar(' ');
	ft_putendl(str);
}

void	ft_add_space(int space, char *info, int i)
{
	space = space - ft_strlen(info) + i;
	while (space >= 0)
	{
		ft_putchar(' ');
		space--;
	}
	ft_putstr(info);
}

void	ft_init_space(t_steve *list, t_size **space)
{
	ft_init_struct_space(space);
	while (list != NULL)
	{
		if (list->link && list)
			(*space)->link = ((*space)->link < ft_strlen(ft_itoa(list->link))
					? ft_strlen(ft_itoa(list->link)) : (*space)->link);
		ft_steve(list, space);
		if (list->space && list)

