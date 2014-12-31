/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 08:04:47 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/31 14:28:46 by scoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
			ft_putstr(	"-2147483648");
			return ;
		}
	else if (nb < 0)
	{
			ft_putchar('-');
			nb *= (-1);
		}
	if (nb >= 10)
	{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	else
		ft_putchar(nb + '0');
}
