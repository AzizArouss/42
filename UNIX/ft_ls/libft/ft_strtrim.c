/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:56 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:52 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int len_space;
	int len;
	int	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	len_space = 0;
	i = 0;
	while (s[i] && ft_isspace(s[i]))
	{
		len_space++;
		i++;
	}
	while (len >= 0 && ft_isspace(s[len]))
		len--;
	return (ft_strsub(s, i, len - len_space + 1));
}
