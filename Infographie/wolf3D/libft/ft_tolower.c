/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:26 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:21:04 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	else
		return (c);
}
