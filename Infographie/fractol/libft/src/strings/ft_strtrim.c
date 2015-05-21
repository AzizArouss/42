/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:17:38 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 17:19:16 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	unsigned int	start;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	start = i;
	i = 0;
	len = ft_strlen(s) - 1;
	while (s[len - i] == ' ' || s[len - i] == '\n' || s[len - i] == '\t')
		i++;
	len = len - i - start + 1;
	str = ft_strsub(s, start, len);
	if (!str)
		return (NULL);
	return (str);
}
