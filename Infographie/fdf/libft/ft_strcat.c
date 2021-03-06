/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:58:39 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/30 14:50:27 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[i])
	{
		if (s2[i] != '\0')
			s1[j] = s2[i];
		else
			s1[j] = '\0';
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
