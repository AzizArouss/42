/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:46 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/08 09:31:03 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char));
{
	int		length;
	int		i;
	char	*out;

	out = NULL;
	if (s)
	{
		length = ft_strlen(s);
		i = 0;
		out = (char *) malloc(sizeof(char) * (length + 1));
		if (out)
		{
			while (i < length)
			{
				out[i] = f(s[i]);
				i++;
			}
			out[i] = '\0';
		}
	}
	return (out);
}
