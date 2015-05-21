/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:01 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:53 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strnew(size_t size)
{
	char	*str;
	int		i;
	int		j;

	i = (int)size;
	j = 0;
	str = (char *)(malloc(sizeof(char) * (i + 1)));
	if (!str)
		return (NULL);
	while (j <= i)
		str[j++] = '\0';
	return (str);
}
