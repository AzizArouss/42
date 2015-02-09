/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:32:01 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 12:32:59 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = NULL;
	str = ft_strnew(len);
	if (str == NULL || start + len > ft_strlen(s))
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
			str[i - start] = s[i];
		i++;
	}
	return (str);
}
