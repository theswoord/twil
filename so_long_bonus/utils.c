/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:13:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/04 17:22:44 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	toupperv2(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	if (c >= '0' && c <= '9')
	{
		c = c;
	}
	return (c);
}

void	monsterchecker(t_long *longe, int *x, int *y)
{
	if (longe->map.kisma[*y][*x] == 'T')
	{
		longe->mon.tdiali++;
		longe->mon.postx = *x;
		longe->mon.posty = *y;
	}
	if (longe->map.kisma[*y][*x] == 'S')
	{
		longe->mon.sdiali++;
		longe->mon.possx = *x;
		longe->mon.possy = *y;
	}
	if (longe->map.kisma[*y][*x] == 'K')
	{
		longe->mon.kdiali++;
		longe->mon.poskx = *x;
		longe->mon.posky = *y;
	}
	if (longe->map.kisma[*y][*x] == 'E')
	{
		longe->game.exitdiali++;
		longe->game.posex = *x;
		longe->game.posey = *y;
	}
}
