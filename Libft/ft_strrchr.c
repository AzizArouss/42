/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:06:22 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/06 16:23:10 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;

	length = ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == (char)c)
		{
			return (&(((char *)s)[length]));
		}
		length--;
	}
	return (NULL);
}
