/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:51:10 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/12 11:59:26 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *tmp;
	size_t	i;

	i = 0;
	tmp = NULL;
	tmp = ft_strnew(len);
	if (tmp == NULL)
		return (NULL);
	while(i < len)
	{
		tmp[i] = s[start];
		start++;
		i++;
	}
	tmp[i] = '\0';
	return(tmp);
}
