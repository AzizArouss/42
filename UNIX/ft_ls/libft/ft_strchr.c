/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:21:38 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:44 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;
	int		j;

	j = 0;
	i = c;
	while (s[j] != i)
	{
		if (!s[j])
			return (NULL);
		j++;
	}
	return ((char *)(s + j));
}
