/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:18:57 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:52 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n--)
		if (*s1++ != *s2++)
			return (0);
	return (1);
}
