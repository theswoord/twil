/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theclock_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:17:32 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 01:45:56 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	tick1(t_long *longe)
{
	drawrosom(longe);
	randommovementk(longe);
	drawexit(longe);
	if (longe->game.posx == longe->game.posex
		&& longe->game.posy == longe->game.posey)
		drawexitwithplayer(longe);
}

void	tick2(t_long *longe)
{
	drawrosom(longe);
	randommovements(longe);
	drawexit(longe);
	if (longe->game.posx == longe->game.posex
		&& longe->game.posy == longe->game.posey)
		drawexitwithplayer(longe);
}

void	tick3(t_long *longe)
{
	drawrosom(longe);
	randommovementt(longe);
	drawexit(longe);
	if (longe->game.posx == longe->game.posex
		&& longe->game.posy == longe->game.posey)
		drawexitwithplayer(longe);
}
