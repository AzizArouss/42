/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:05 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:47 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	len;
	int	i;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
