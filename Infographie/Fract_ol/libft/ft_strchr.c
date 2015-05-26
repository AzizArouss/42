/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:47:43 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:33 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	if (str)
	{
		while (*str)
		{
			if ((char)c == *str)
				return (str);
			str++;
		}
		if ((char)c == 0)
			return (str);
	}
	return (NULL);
}
