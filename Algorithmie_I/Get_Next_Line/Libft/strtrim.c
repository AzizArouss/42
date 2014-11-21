/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:17:07 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/01 12:36:19 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	int		len;
	int		start;

	if (!s)
		return (NULL);
	start = 0;
	while (*s == '\n' || *s == ' ' || *s == '\t')
		s++;
	len = ft_strlen(s);
	newstr = ft_strnew(len - start);
	if (newstr == NULL)
		return (NULL);
	newstr = ft_strcpy(newstr, s);
	while (len-- >= 0)
	{
		if (s[len] == '\n' || s[len] == ' ' || s[len] == '\t')
			newstr[len] = 0;
		else
			break ;
	}
	return (newstr);
}
