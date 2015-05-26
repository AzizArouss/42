/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:48:19 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:40 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		while (str[counter])
		{
			(*f)(&str[counter]);
			counter++;
		}
	}
}
