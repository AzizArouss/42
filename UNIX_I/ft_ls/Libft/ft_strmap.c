/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:15 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:48 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*tmp_dst;

	if (s == NULL)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dst == NULL)
		return (NULL);
	tmp_dst = dst;
	while (*s != '\0')
	{
		*tmp_dst = (*f)(*s);
		tmp_dst++;
		s++;
	}
	*tmp_dst = '\0';
	return (dst);
}
