/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:01:04 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/07 18:05:02 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		cmp;

	if (s1 && s2)
	{
		cmp = ft_strncmp(s1, s2, n);
		if (cmp == 0)
		{
			return (1);
		}
	}
	return (0);
}
