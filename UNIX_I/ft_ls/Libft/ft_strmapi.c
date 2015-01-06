/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:17 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:48 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*tmp;

	if (s && f)
	{
		j = ft_strlen((char*)s);
		i = 0;
		tmp = (char*)malloc(j * sizeof(tmp));
		while (s[i] != '\0')
		{
			tmp[i] = f(s[i], i);
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
