/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:20:23 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:20 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_n_count(int n, int i)
{
	while (n > 9 || n < 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	int		nbr;
	char	*str2;
	int		i;
	char	*str;

	len = (n < 0) ? 2 : 1;
	nbr = n;
	i = ft_n_count(n, len);
	str2 = ft_strnew(i + 1);
	while (i > 0)
	{
		if (n >= 0)
			str2[i - 1] = ((char)((nbr % 10) + 48));
		if (n < 0 && i >= 2)
			str2[i - 2] = ((char)(48 - (nbr % 10)));
		i--;
		nbr /= 10;
	}
	if (n < 0)
		str2[i] = '-';
	str = ft_strnew(ft_n_count(n, len) + 1);
	ft_strcpy(str, str2);
	free(str2);
	return (str);
}
