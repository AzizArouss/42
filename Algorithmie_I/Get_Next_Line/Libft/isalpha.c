/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:23:47 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 16:47:07 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c);
int	ft_isupper(int c);

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
