/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:18:45 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:49 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*copy_str;
	int		len;
	int		i;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = (char *)(malloc(len + 1));
		if (!str)
			return (NULL);
		copy_str = str;
		while (i < len)
		{
			*str = (*f)(i, *s);
			str++;
			s++;
			i++;
		}
		*str = 0;
		return (copy_str);
	}
	else
		return (NULL);
}
