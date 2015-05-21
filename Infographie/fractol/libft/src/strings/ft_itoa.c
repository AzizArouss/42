/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:22:43 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 16:23:04 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts int n into a "malloc'ed" string then returns it.
** Supports negative integers.
*/

#include "libft.h"
#include <string.h>

static size_t	ft_calcul_len(long long int n)
{
	size_t	pow;

	pow = 1;
	while (n / 10)
	{
		pow++;
		n = n / 10;
	}
	return (pow);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*res;
	size_t			i;
	long long int	save;
	size_t			size;

	save = (long long int)n;
	len = ft_calcul_len(save);
	i = 0;
	if (save < 0)
	{
		res = ft_strnew(len + 1);
		res[0] = '-';
		save = (n != -2147483648 ? -n : 2147483648);
	}
	else
		res = ft_strnew(len);
	size = n < 0 ? len : len - 1;
	while (i < len)
	{
		res[size - i] = save % 10 + '0';
		save = save / 10;
		i++;
	}
	return (res);
}
