/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 08:01:16 by aarouss           #+#    #+#             */
/*   Updated: 2015/03/10 08:01:40 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	move_right(t_env *e)
{
	e->move.old_dirx = e->dirx;
	e->dirx = e->dirx * cos(-(e->move.rotspeed)) - e->diry *
		sin(-(e->move.rotspeed));
	e->diry = e->move.old_dirx * sin(-(e->move.rotspeed)) + e->diry *
		cos(-(e->move.rotspeed));
	e->move.old_planex = e->planex;
	e->planex = e->planex * cos(-(e->move.rotspeed)) - e->planey *
		sin(-(e->move.rotspeed));
	e->planey = e->move.old_planex * sin(-(e->move.rotspeed)) + e->planey *
		cos(-(e->move.rotspeed));
}

void	move_left(t_env *e)
{
	e->move.old_dirx = e->dirx;
	e->dirx = e->dirx * cos(e->move.rotspeed) - e->diry *
		sin(e->move.rotspeed);
	e->diry = e->move.old_dirx * sin(e->move.rotspeed) + e->diry *
		cos(e->move.rotspeed);
	e->move.old_planex = e->planex;
	e->planex = e->planex * cos(e->move.rotspeed) - e->planey *
		sin(e->move.rotspeed);
	e->planey = e->move.old_planex * sin(e->move.rotspeed) + e->planey *
		cos(e->move.rotspeed);
}
