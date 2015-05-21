/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 15:19:00 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/26 15:19:01 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a lowered-cased string.
** -------------------------------
*/

char	*ft_strtolower(char *str)
{
	int		src_len;
	char	*lower_src;
	size_t	i;

	i = 0;
	src_len = ft_strlen(str);
	if ((lower_src = ft_strnew(src_len)) == NULL)
		return (NULL);
	while (str[i])
	{
		lower_src[i] = ft_tolower(str[i]);
		i++;
	}
	return (lower_src);
}
