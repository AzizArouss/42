/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:52:34 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/22 12:36:56 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;
	int		s1len;
	int		s2len;

	if (!s1 && !s2)
		return (NULL);
	s1len = (s1 != NULL) ? ft_strlen(s1) : 0;
	s2len = (s2 != NULL) ? ft_strlen(s2) : 0;
	strnew = (char *) malloc (s1len + s2len + 1);
	if (strnew == NULL)
		return (NULL);
	strnew[s1len + s2len] = 0;
	strnew[0] = 0;
	if (s1len != 0)
		ft_strcat(strnew, s1);
	if (s2len != 0)
		ft_strcat(strnew, s2);
	return (strnew);
}
