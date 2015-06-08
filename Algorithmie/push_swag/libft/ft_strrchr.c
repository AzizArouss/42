/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 13:21:54 by aarouss           #+#    #+#             */
/*   Updated: 2015/06/08 13:23:21 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;
	int		counter;

	str = (char*)s;
	counter = 0;
	if (str)
	{
		len = ft_strlen(str);
		while (counter < (int)len)
		{
			counter++;
			str++;
		}
		while (counter >= 0)
		{
			if (str[0] == (char)c)
				return (str);
			str--;
			counter--;
		}
	}
	return (NULL);
}
