/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:18:41 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:49 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*copy_str;
	int		len;

	if (s && f)
	{
		len = ft_strlen(s);
		str = (char *)(malloc(len + 1));
		copy_str = str;
		if (!str)
			return (NULL);
		while (*s)
		{
			*str = (*f)(*s);
			str++;
			s++;
		}
		*str = 0;
		return (copy_str);
	}
	else
		return (NULL);
}
