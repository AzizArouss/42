/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:19 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:21:02 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		cpy_len;
	unsigned int		cpy_start;
	char				*ret;

	if (!s || !(*s) || !len)
		return (NULL);
	cpy_len = (unsigned int)len;
	cpy_start = start;
	str = (char *)(malloc(sizeof(len + 1)));
	if (!str)
		return (NULL);
	ret = str;
	s += start;
	while (cpy_start++ < (cpy_len + start))
		*str++ = *s++;
	*str = '\0';
	return (ret);
}
