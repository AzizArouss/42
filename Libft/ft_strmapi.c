/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:52:33 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/12 12:42:50 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	length;
	unsigned int	i;
	char			*out;

	length = ft_strlen(s);
	i = 0;
	if (s && (*f) != NULL)
	{
		out = (char *)malloc(sizeof(char) * (length + 1));
		if (out)
		{
			while (i < length)
			{
				out[i] = f(i, s[i]);
				i++;
			}
			out[i] = '\0';
		}
	}
	return (out);
}
