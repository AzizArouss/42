/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 12:46:54 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/09 17:28:07 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_path_steve(char *path)
{
	int		i;
	char	*dest;

	i = 0;
	if (ft_strlen(path) == 1)
		return (ft_strjoin(path, "/"));
	while (path[i + 1])
		i++;
	if (path[i] != '/')
	{
		dest = ft_strjoin(path, "/");
		return (dest);
	}
	return (path);
}

int		ft_time2(t_steve **list, t_steve *tmp2, t_opts *opt)
{
	t_steve		*tmp;

	tmp = *list;
	if (tmp == NULL)
	{
		*list = tmp2;
		return(0);
	}
	else if ((opt->t == 1 && (tmp2->time > tmp->time
				|| (tmp2->time == tmp->time
				&& ft_strcmp(tmp2->file, tmp->file) < 0)))
				|| (opt->t == 0 && ft_strcmp(tmp2->file, tmp->file) < 0))
	{
		tmp2->next = *list;
		*list = tmp2;
		return (0);
	}
	return(1);
}

int		ft_time(t_steve **list, t_steve *tmp2, t_opts *opt)
{
	t_steve		*tmp;

	tmp = *list;
	if (ft_time2(list, tmp2, opt) == 0)
		return (0);
	while (tmp->next != NULL)
	{
		if
