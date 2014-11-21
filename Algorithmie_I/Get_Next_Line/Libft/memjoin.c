/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 12:32:27 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/22 12:36:52 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memjoin(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*buff;
	char	*copy;

	i = 0;
	if (!s1 || !s2 || !n)
		return (s1);
	buff = (char *) s1;
	copy = (char *) s2;
	while (*s2)
	{
		buff[n] = copy[i];
		i++;
		n++;
	}
	return (s1);
}
