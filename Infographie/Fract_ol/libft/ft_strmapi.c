/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:48:42 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:46 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*str_new;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[counter])
		{
			str_new[counter] = (*f)(counter, str[counter]);
			counter++;
		}
		str_new[counter] = '\0';
		return (str_new);
	}
	return (NULL);
}
