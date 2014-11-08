/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:12:09 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/08 16:00:11 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		counter;
	int		i;
	int		j;

	i = 0;
	j = 0;
	counter = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		counter++;
		i++;
	}
	j = ft_strlen(s);
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
	{
		counter++;
		j--;
	}
	tmp = ft_strsub(s, i, (ft_strlen(s) - counter));
	return (tmp);
}
