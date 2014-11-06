/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 09:46:20 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/06 10:53:37 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		dif;

	dif = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
			return (dif);
		i++;
		if (i == n)
			return (0);
	}
	return (s1[i] - s2[i]);
}
