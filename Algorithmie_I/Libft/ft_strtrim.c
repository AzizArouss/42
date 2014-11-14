/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:12:09 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/14 15:48:16 by aarouss          ###   ########.fr       */
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
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		counter++;
		i++;
	}
	if (s[i] == '\0')
		return (tmp = malloc(0));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
	{
		counter++;
		j--;
	}
	tmp = ft_strsub(s, i, (ft_strlen(s) - counter));
	return (tmp);
}
