/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 16:50:31 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/24 18:05:08 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "header.h"

int		main(int argc, char **argv)
{
	char	*buf;
	int		n;

	n = 1;
	if (argc < 2)
	{
		buf = get_stdin(0);
		ft_prem(buf);
	}
	else 
		while (n < argc)
		{
			buf = ft_read(argv[n]);
			ft_prem(buf);
			n++;
		}
	return (0);
}

void	ft_prem(char *buf)
{
	int		lg;
	t_list	save;
	char	**position;
	int 	i;
	t_var	symb;

	i = 0;
	while (buf[i] != '\n')
		i++;
	symb.full = buf[i - 1];
	symb.obst = buf[i - 2];
	symb.empty = buf[i - 3];
	lg = atoi(buf, (i + 4));
	buf = buf + i;
	if (gestion_error(buf, symb) == 0)
	{
		tranform_buf_position(buf, position, save);
		ft_action(position, symb);
	}
}

void	ft_action(char **position, t_var symb, t_list save)
{
	int		n;
	int		temp;

	n = 0;
	temp = 1;
	if (position[save.a][save.b] == '\0')
		return (0);
	while (position[save.a + n][save.b + n] == empty || temp == 1)
	{
		temp = ft_check(position, n, save);
		if (temp == 1)
			n++;
	}
	if (ft_action(ft_posis(position, save), save.symb == 0))
	{
		buf = ft_impression(buf, save, symb);
		ft_impression(buf, save, symb);
	}
	return (1);
}

int		ft_check(char **position, int n, t_var symb, t_list save)
{
	int		v;
	int		x;

	v = 0;
	x = 0;
	while (v < n)
	{
		if (position[save.a + v][save.b + n - 1] != symb.empty)
			return (-1);
		v++;
	}
	while (x < n - 1)
	{
		if (position[save.a + v - 1][save.b + x] != symb.empty)
			return (-1);
		x++;
	}
	if (n > save.taille)
	{
		save.taille = n;
		save.pos_a = save.a;
		save.pos_b = save.b;
	}
	return (1);
}
