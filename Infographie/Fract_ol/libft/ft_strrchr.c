/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:49:17 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:54 by aarouss          ###   ########.fr       */
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
