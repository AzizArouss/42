/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:10:48 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/08 11:47:10 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *));
{
	int		lenght;
	int		i;

	if (s && f)
	{
		lenght = ft_strlen(s);
		i = 0;
		while (i < lenght)
		{
			f(&(s[i]));
			i++;
		}
	}
}