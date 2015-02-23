/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:21:01 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:38 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl(char const *str)
{
	if (str != NULL)
	{
		ft_putstr(str);
		ft_putchar('\n');
	}
}