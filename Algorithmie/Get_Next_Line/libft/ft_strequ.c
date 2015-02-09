/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:55:59 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/04 16:28:06 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		cmp;

	if (s1 && s2)
	{
		cmp = ft_strcmp(s1, s2);
		if (cmp == 0)
		{
			return (1);
		}
	}
	return (0);
}
