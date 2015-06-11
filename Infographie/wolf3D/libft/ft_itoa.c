/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:13:20 by aarouss           #+#    #+#             */
/*   Updated: 2015/06/11 13:35:45 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_count(int n)
{
	int			j;

	j = 0;
	while (n /= 10)
		j++;
	return (j + 1);
}

char			*ft_itoa(int n)
{
	char		*str;
	char		*ret;
	int			len;

	len = ft_count(n);
	str = (char *)(malloc(sizeof(char) * (len + (n < 0 ? 1 : 0) + 1)));
	if (!str)
		return (NULL);
	ret = str;
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		*str++ = '-';
		n = -n;
	}
	str += len - 1;
	*(str + 1) = '\0';
	while (len--)
	{
		*str-- = (char)(n % 10) + '0';
		n /= 10;
	}
	return (ret);
}
