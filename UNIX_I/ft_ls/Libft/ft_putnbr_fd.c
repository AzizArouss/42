/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:21:10 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:41 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	unsigned int	nbr;

	i = 0;
	nbr = n;
	if (n < 0)
	{
		i += ft_putchar_fd('-', fd);
		nbr = -n;
	}
	if (nbr / 10)
		i += ft_putnbr_fd(nbr / 10, fd);
	i += ft_putchar_fd(nbr % 10 + '0', fd);
	return (i);
}
