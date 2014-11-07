/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:05:11 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/07 18:13:21 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght;
	char	*out;

	out = NULL;
	if (s1 && s2)
	{
		lenght = ft_strlen(s1) + ft_strlen(s2);
		out = (char *)malloc(sizeof(char) * (lenght + 1));
		if (out)
		{
			ft_strcpy(out, s1);
			ft_strcpy(out, s2);
		}
	}
	return (out);
}
