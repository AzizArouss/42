/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:49:22 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:55 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace_char(char const *s, char c_s, char c_r)
{
	char	*str;
	int		i;

	str = (char*)s;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c_s)
			str[i] = c_r;
		++i;
	}
	return (str);
}
