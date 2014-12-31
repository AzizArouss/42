/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:51:10 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/31 14:36:44 by scoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (s != NULL || s[0] != '\0' || start > len || s[start + len])
	{
		tmp = NULL;
		tmp = ft_strnew(len + 1);
		tmp[len] = '\0';
		if (tmp == NULL)
			return (NULL);
		while (i != len && s[start])
		{
			tmp[i] = s[start];
			start++;
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
