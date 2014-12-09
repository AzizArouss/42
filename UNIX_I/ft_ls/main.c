/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 10:58:42 by aarouss           #+#    #+#             */
/*   Updated: 2014/12/09 11:48:56 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "ft_ls.h"

int		main(int ac, char **av)
{
	int			i;
	t_opts		*opt;
	t_steve		*list;
	int			rec;

	list = NULL;
	opt = NULL;
	opt = ft_init_opt(opt)
	rec = 0
	i = 1
	if (ac == 1|| (ac == 2 && (ft_strcmp(av[1], "--") == 0)))
		ft_find("./", &list, opt, rec);
	else
	{
		while (i < ac)
		{
			ft_ls_opt(av[i], opt, list);
			i++;
		}
	}
	if (opt->opt == 0 && ac != 1)
		ft_find("./", &list, opt, rec);
	return(0);
}
