/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:12:09 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/30 14:52:59 by aarouss          ###   ########.fr       */
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
