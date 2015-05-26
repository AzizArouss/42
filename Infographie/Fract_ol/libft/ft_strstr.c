/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:49:31 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:57 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char*)s1;
	i = 0;
	if (str && s2)
	{
		if (!*s2)
			return (str);
		while (str[i])
		{
			j = 0;
			while (s2[j] == str[i + j])
			{
				if (!(s2[j + 1]))
					return (str + i);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
