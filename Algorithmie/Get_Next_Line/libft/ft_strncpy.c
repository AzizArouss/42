/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:47:08 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/05 16:36:40 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
