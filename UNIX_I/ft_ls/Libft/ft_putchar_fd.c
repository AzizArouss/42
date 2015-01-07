/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:20:59 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/07 11:17:39 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_putchar_fd(int c, int fd)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	return (write(fd, &chr, 1));
}
