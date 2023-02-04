/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monstermovement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:11:14 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/04 17:13:13 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	monmov(t_long *longe)
{
	if (longe->mon.posky == longe->game.posy
		&& longe->mon.poskx == longe->game.posx)
	{
		exit(1);
	}
	if (longe->mon.posty == longe->game.posy
		&& longe->mon.postx == longe->game.posx)
	{
		exit(1);
	}
	if (longe->mon.possy == longe->game.posy
		&& longe->mon.possx == longe->game.posx)
	{
		exit(1);
	}
}

void	randommovementk(t_long *longe)
{
	int	a;
	int	b;
	int	tx;
	int	ty;

	a = rand() % 3;
	b = rand() % 3;
	tx = longe->mon.poskx + (a == 0) - (a == 2);
	ty = longe->mon.posky + (b == 0) - (b == 2);
	if (longe->map.kisma[ty][tx] != '1' && longe->map.kisma[ty][tx] != 'C')
	{
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img0, longe->mon.poskx * 32, longe->mon.posky * 32);
		longe->mon.poskx = tx;
		longe->mon.posky = ty;
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->anim.imgklown[rand() % 5], longe->mon.poskx * 32,
			longe->mon.posky * 32);
	}
}

void	randommovementt(t_long *longe)
{
	int	a;
	int	b;
	int	tx;
	int	ty;

	a = rand() % 3;
	b = rand() % 3;
	tx = longe->mon.postx + (a == 0) - (a == 2);
	ty = longe->mon.posty + (b == 0) - (b == 2);
	if (longe->map.kisma[ty][tx] != '1' && longe->map.kisma[ty][tx] != 'C')
	{
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img0, longe->mon.postx * 32, longe->mon.posty * 32);
		longe->mon.postx = tx;
		longe->mon.posty = ty;
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->anim.imgtiam[rand() % 6], longe->mon.postx * 32,
			longe->mon.posty * 32);
	}
}

void	randommovements(t_long *longe)
{
	int	a;
	int	b;
	int	tx;
	int	ty;

	a = rand() % 3;
	b = rand() % 3;
	tx = longe->mon.possx + (a == 0) - (a == 2);
	ty = longe->mon.possy + (b == 0) - (b == 2);
	if (longe->map.kisma[ty][tx] != '1' && longe->map.kisma[ty][tx] != 'C'
		&& longe->map.kisma[ty][tx] != 'E')
	{
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img0, longe->mon.possx * 32, longe->mon.possy * 32);
		longe->mon.possx = tx;
		longe->mon.possy = ty;
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->anim.imgserp[rand() % 4], longe->mon.possx * 32,
			longe->mon.possy * 32);
	}
}
