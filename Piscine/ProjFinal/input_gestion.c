/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_gestion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 16:50:11 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/24 18:05:16 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*get_stdin(int file_descriptor)
{
	char	**tmp;
	char	*tmp_initial;
	int		rd_ret;
	int		rd_sum;

	rd_ret = TMP;
	rd_sum = 0;
	tmp_initial = (char *)malloc(sizeof(char) * (TMP + 1));
	tmp = &tmp_initial;
	if (!*tmp)
		return (NULL);
	while (rd_ret > 0)
	{
		*tmp = ft_realloc(*tmp, rd_sum, TMP + 1);
		if (!*tmp)
			return (NULL);
		rd_ret = read(file_descriptor, *tmp + rd_sum, TMP);
		rd_sum += rd_ret;
	}
	(*tmp)[rd_sum] = 0;
	return (*tmp);
}

void	*ft_realloc(char *source, int old_size, int additional_size)
{
	char *retval;

	retval = (char*)malloc(sizeof(char) * (old_size + additional_size));
	if (!retval)
		return (NULL);
	ft_memcpy(retval, source, old_size);
	free((void*)source);
	return (retval);
}

void	*ft_memcpy(char *dest, char *source, int n)
{
	int		index;

	index = 0;
	while (index < n)
	{
		dest[index] = source[index];
		index++;
	}
	return (dest);
}
