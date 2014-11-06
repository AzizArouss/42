/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:48:22 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/06 16:05:08 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lenght;

	lenght = ft_strlen(s);
	while (lenght >= 0)
	{
		if (s[lenght] == (char)c)
		{
			return (&(((char *)s)[lenght]));
		}
		lenght--;
	}
	return (NULL);
}
