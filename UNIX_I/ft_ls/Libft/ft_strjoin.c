/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:07 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:47 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = ft_strnew(len1 + len2 + 1);
	if (s3)
	{
		ft_memcpy(s3, s1, len1);
		ft_memcpy(s3 + len1, s2, len2);
		s3[len1 + len2] = '\0';
		return (s3);
	}
	return (NULL);
}
