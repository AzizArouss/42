/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 16:48:00 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/24 18:05:10 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char ft_read(char *arg_txt)
{
	char	*buf;
	int		file_descriptor;

	file_descriptor = open("arg_txt", O_RDONLY);
	if (file_descriptor == -1)
		return (-1);
	buf = get_stdin(file_descriptor);
	if (close(file_descriptor) == -1)
		return (-1);
	return (*buf);
}

void	ft_impression(char **position, t_list save, t_var symb)
{
	int x;
	int v;

	x = 0;
	v = 0;
	while (x < save.taille)
	{
		position[save.pos_a + v][save.pos_b + x] = save.full;
		v++;
		if (v == save.taille)
		{
			v = 0;
			x++;
		}
	}
	putstr(position);
}

void	transform_buf_position(char *buf, char **position, t_list save)
{
	int		i;
	int		t;
	int		a;

	i = 0;
	t = 0;
	a = 0;
	while (buf[i] != '\0')
	{
		if (i != 0)
			i++;
		if (buf[i] == '\n')
			t++;
		if (i == 0)
			i++;
	}
	position = (char **)malloc(sizeof(char*) * t);
	while (a > t)
	{
		position[t] = (char *)malloc(sizeof(char) * ((i / t) + 1));
		a++;
	}
	initialisation(buf, position, save);
	free(buf);
}

void	initialisation(char *buf, char **position, t_list save)
{
	int i;

	save.a = 0;
	save.b = 0;
	i = 0;
	while (buf[i] != '\0')
	{
		position[save.a][save.b] = buf[i];
		if (buf[i] == '\n')
		{
			position[save.a][save.b + 1] = '\0'; 
				save.a++;
			save.b = 0;
		}
		else
			save.b++;
		i++;
	}
	position[save.a][save.b] = '\0';
	save.a = 0;
	save.b = 0;
}

void	ft_posis(char **position, t_list save)
{
	save.b++;
	if (position[save.a][save.b] == '\n')
	{
		save.a++;
		save.b = 0;
	}
}
