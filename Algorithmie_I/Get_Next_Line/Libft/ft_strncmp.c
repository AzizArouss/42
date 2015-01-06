/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 09:46:20 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/31 11:06:32 by scoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] > s2[i])
			return (-1);
		if (s1[i] < s2[i])
			return (1);
		i++;
	}
	return (0);
}
