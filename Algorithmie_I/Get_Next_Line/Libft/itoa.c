/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 11:23:15 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/22 14:11:34 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rev(char *str)
{
	char			tmp;
	unsigned int	len;
	unsigned int	i;

	if (!str)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*num;
	char	sign;
	char	*onum;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = ft_strnew(11);
	onum = num;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	else
		sign = 0;
	while (n > 0)
	{
		*(num++) = n % 10 + 48;
		n = (n - n % 10) / 10;
	}
	if (sign)
		*num = '-';
	return (rev(onum));
}
