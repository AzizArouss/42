/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:30:24 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/07 17:37:18 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

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
