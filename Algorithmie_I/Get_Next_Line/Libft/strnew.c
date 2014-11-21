/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:32:02 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/05 17:52:47 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *) malloc(size + 1);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size + 1);
	return (s);
}
