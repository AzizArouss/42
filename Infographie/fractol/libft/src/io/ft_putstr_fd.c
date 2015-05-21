/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:34:48 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 16:34:52 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void		ft_putstr_fd(char const *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	if (!s)
		return ;
	write(fd, s, len);
}
