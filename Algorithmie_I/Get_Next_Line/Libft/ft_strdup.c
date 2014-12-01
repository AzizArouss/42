/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:01:11 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/24 14:44:59 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!(cpy = (char *)malloc(sizeof(char *) * i)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	return (cpy);
}
