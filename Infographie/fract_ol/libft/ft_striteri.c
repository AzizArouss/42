/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:30:24 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/30 14:50:54 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	lenght;
	unsigned int	i;

	if (s && f)
	{
		lenght = ft_strlen(s);
		i = 0;
		while (i < lenght)
		{
			f(i, &(s[i]));
			i++;
		}
	}
}
